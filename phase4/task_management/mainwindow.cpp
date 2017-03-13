#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sys/sysinfo.h>
#include <QTimer>
#include <QDateTime>
#include <time.h>
#include <QString>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <unistd.h>
#include <sys/utsname.h>
#include <QDir>
#include <QStringList>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cpustatus=new QLabel();
    memstatus=new QLabel();
    timestatus=new QLabel();
    cpustatus->setIndent(130);
    cpustatus->setAlignment(Qt::AlignRight);
    memstatus->setIndent(130);
    memstatus->setAlignment(Qt::AlignRight);
    memstatus->setText("24%");
    timestatus->setAlignment(Qt::AlignRight);
    cpu=new QLabel();
    cpu->setText("CPU : ");
    mem=new QLabel();
    mem->setText("MEMORY : ");
    times=new QLabel();
    times->setText("TIME : ");
    cpu->setAlignment(Qt::AlignRight);
    mem->setAlignment(Qt::AlignRight);
    times->setAlignment(Qt::AlignRight);
    ui->statusBar->addWidget(cpu);
    ui->statusBar->addWidget(cpustatus);
    ui->statusBar->addWidget(mem);
    ui->statusBar->addWidget(memstatus);
    ui->statusBar->addWidget(times);
    ui->statusBar->addWidget(timestatus);
    setCentralWidget(ui->TabWidget);
    testTimer = new QTimer();
    this->setWindowTitle("TaskManagement");
    disCpuInfo(0);
    disSysInfo();
    disProInfo();
    testTimer->start(1000);
    connect(testTimer,SIGNAL(timeout()),SLOT(disCpuInfo()));
    connect(testTimer,SIGNAL(timeout()),SLOT(disSysInfo()));
    connect(testTimer,SIGNAL(timeout()),SLOT(getTime()));
    connect(testTimer,SIGNAL(timeout()),SLOT(disMemInfo()));
    connect(testTimer,SIGNAL(timeout()),SLOT(disProInfo()));
}

void MainWindow::getTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss");
    timestatus->setText(str);
}

void MainWindow::disMemInfo()
{
    struct {
        int totalram;
        int freeram;
        int available;
        int buffers;
        int cached;
        int totalswap;
        int freeswap;
    }meminfo;
    int memusage=0;
    ifstream fs;
    stringstream ss;
    string trash;
    fs.open("/proc/meminfo");
    fs>>trash>>meminfo.totalram;
    fs>>trash>>trash>>meminfo.freeram;
    fs>>trash>>trash>>meminfo.available;
    fs>>trash>>trash>>meminfo.buffers;
    fs>>trash>>trash>>meminfo.cached;
    for(int i=0;i<29;++i)
        fs>>trash;
    fs>>meminfo.totalswap;
    fs>>trash>>trash>>meminfo.freeswap;
    ui->totalram->setNum(meminfo.totalram);
    ui->freeram->setNum(meminfo.freeram);
    ui->available->setNum(meminfo.available);
    ui->bufferram->setNum(meminfo.buffers);
    ui->cached->setNum(meminfo.cached);
    ui->totalswap->setNum(meminfo.totalswap);
    ui->freeswap->setNum(meminfo.freeswap);
    memusage = 100-(meminfo.freeram+meminfo.buffers+meminfo.cached)*100/meminfo.totalram;
    ui->memprogressBar->setValue(memusage);
    memstatus->setText(QString::number(memusage)+'%');
}

void MainWindow::disProInfo()
{
    ui->listWidget->clear();
    QDir qd("/proc");
    QStringList qsList = qd.entryList();
    QString id_of_pro;
    bool ok;
    int nextpro=2;
    int a, b;
    int number_of_sleep = 0, number_of_run = 0, number_of_zombie = 0;
    int totalProNum = 0; //进程总数
    QString proName; //进程名
    QString proState; //进程状态
    QString proPri; //进程优先级
    QString proMem; //进程占用内存
    QString tempStr; //读取文件信息字符串
    QFile tempFile;
    new QListWidgetItem(QString::fromUtf8("PID\t") + "Name" + "\t\t" +
                                                 "Status" + "\t" +
                                                 "Priority" + "\t" +
                                                 "Memory", ui->listWidget);
    //循环读取进程
    while (1)
    {
        //获取进程PID
        id_of_pro = qsList[nextpro++];
        id_of_pro.toInt(&ok, 10);
        if(!ok)
        {
            break;
        }
        totalProNum++;
        //打开PID所对应的进程状态文件
        tempFile.setFileName("/proc/" + id_of_pro + "/stat");
        if ( !tempFile.open(QIODevice::ReadOnly) )
        {
            QMessageBox::warning(this, tr("warning"), tr("The pid stat file can not open!"), QMessageBox::Yes);
            continue;
        }
        tempStr = tempFile.readLine();
        if (tempStr.length() == 0)
           break;
        a = tempStr.indexOf("(");
        b = tempStr.indexOf(")");
        proName = tempStr.mid(a+1, b-a-1);
        proName.trimmed(); //删除两端的空格
        proState = tempStr.section(" ", 2, 2);
        proPri = tempStr.section(" ", 17, 17);
        proMem = tempStr.section(" ", 22, 22);

        switch ( proState.at(0).toLatin1() )
        {
            case 'S':   number_of_sleep++; break; //Sleep
            case 'R':   number_of_run++; break; //Running
            case 'Z':   number_of_zombie++; break; //Zombie
            default :   break;
        }

        if (proName.length() >= 10)
        {
            new QListWidgetItem(id_of_pro + "\t" +
                                                proName + "   \t" +
                                                proState + "\t" +
                                                proPri + "\t" +
                                                proMem, ui->listWidget);
        }
        else
        {
            new QListWidgetItem(id_of_pro + "\t" +
                                                proName + "\t\t" +
                                                proState + "\t" +
                                                proPri + "\t" +
                                                proMem, ui->listWidget);
        }
        tempFile.close();
        ui->runningpro->setNum(number_of_run);
        ui->sleeppro->setNum(number_of_sleep);
        ui->zombiepro->setNum(number_of_zombie);
    }
}

MainWindow::~MainWindow()
{
    delete testTimer;
    delete cpustatus;
    delete cpu;
    delete memstatus;
    delete mem;
    delete timestatus;
    delete times;
    delete ui;
}

void MainWindow::disSysInfo()
{
    struct utsname buf;
    struct sysinfo info;
    QString hour,min,sec;
    time_t cur_time = 0;
    time_t boot_time = 0;
    ifstream fs;
    string trash;
    char model_name[50];
    ui->logname->setText(getenv("LOGNAME"));
    system("cat /proc/cpuinfo | grep \"model name\" > cpuinfo.txt");
    fs.open("cpuinfo.txt");
    fs>>trash;
    fs>>trash;
    fs>>trash;
    fs.getline(model_name,sizeof(model_name));
    fs.close();
    ui->cpu->setText(model_name);
    if(!uname(&buf))
    {
        ui->kernel->setText(buf.sysname);
        ui->version->setText(buf.version);
        ui->hostname->setText(buf.nodename);
        ui->release->setText(buf.release);
        ui->machine->setText(buf.machine);
    }
    if(!sysinfo(&info)) {
        time(&cur_time);
        if (cur_time > info.uptime) {
            boot_time = cur_time - info.uptime;
        }
        else {
            boot_time = info.uptime - cur_time;
        }
        ui->boottime->setText(ctime(&boot_time));
        hour=QString::number(info.uptime/60/60);
        if(*hour.begin()<'2'&&hour.length()==1)
            hour+=" hour ";
        else
            hour+=" hours ";
        min=QString::number(info.uptime%3600/60);
        if(*min.begin()<'2'&&min.length()==1)
            min+=" minute ";
        else
            min+=" minutes ";
        sec=QString::number(info.uptime%60);
        if(*sec.begin()<'2'&&sec.length()==1)
            sec+=" second";
        else
            sec+=" seconds";
        ui->runtime->setText(hour+min+sec);
        ui->bufferram->setText(QString::number(info.bufferram));
        ui->freeram->setText(QString::number(info.freeram));
        ui->freeswap->setText(QString::number(info.freeswap));
        ui->totalram->setText(QString::number(info.totalram));
        ui->totalswap->setText(QString::number(info.totalswap));
        ui->sharedram->setText(QString::number(info.sharedram));
    }

}

void MainWindow::disCpuInfo(int choose)
{
    static double totalCpuTime[5]={0},idleTime[5]={0};
    double totalCpuTime1=0,idleTime1=0;
    int utilization=0;
    QString tocpustatus;
    string trash;
    ifstream fs;
    stringstream ss;
    switch (choose) {
    case 0:
        system("cat /proc/stat | grep \"cpu \" > stat.txt");
        break;
    case 1:
        system("cat /proc/stat | grep \"cpu0 \" > stat.txt");
        break;
    case 2:
        system("cat /proc/stat | grep \"cpu1 \" > stat.txt");
        break;
    case 3:
        system("cat /proc/stat | grep \"cpu2 \" > stat.txt");
        break;
    case 4:
        system("cat /proc/stat | grep \"cpu3 \" > stat.txt");
        break;
    default:
        break;
    }
    fs.open("stat.txt");
    fs>>trash;
    for(int i=0; i<9;++i)
    {
        double temp;
        fs>>trash;
        ss.clear();
        ss<<trash;
        ss>>temp;
        i==3?idleTime1=temp:0;
        totalCpuTime1+=temp;
    }
    fs.close();
    if(totalCpuTime[choose]==0)
    {
        totalCpuTime[choose]=totalCpuTime1;
        idleTime[choose]=idleTime1;
        return;
    }
    utilization=(idleTime1-idleTime[choose])*100/(totalCpuTime1-totalCpuTime[choose]);
    utilization=100-utilization;
    totalCpuTime[choose]=totalCpuTime1;
    idleTime[choose]=idleTime1;
    switch (choose) {
    case 0:
        ui->progressBar->setValue(utilization);
        tocpustatus=QString::number(utilization);
        tocpustatus+='%';
        //tocpustatus.append(tocpustatuschar,10-tocpustatus.length());
        cpustatus->setText(tocpustatus);
        break;
    case 1:
        ui->progressBar_2->setValue(utilization);
        break;
    case 2:
        ui->progressBar_3->setValue(utilization);
        break;
    case 3:
        ui->progressBar_4->setValue(utilization);
        break;
    case 4:
        ui->progressBar_5->setValue(utilization);
        break;
    default:
        break;
    }
    if(choose<4)
        disCpuInfo(choose+1);
}

void MainWindow::on_pushButton_clicked()
{
    if(QMessageBox::Yes == QMessageBox::warning(this, QString("WARNING"), QString("Are you sure to restart?"),
                            QMessageBox::Yes|QMessageBox::No, QMessageBox::Yes))
        system("shutdown -h now");
}

void MainWindow::on_pushButton_2_clicked()
{
    if(QMessageBox::Yes == QMessageBox::warning(this, QString("WARNING"), QString("Are you sure to reboot?"),
                            QMessageBox::Yes|QMessageBox::No, QMessageBox::Yes))
        system("reboot");
}
