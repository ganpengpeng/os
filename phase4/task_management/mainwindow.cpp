#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sys/sysinfo.h>
#include <QTimer>
#include <time.h>
#include <QString>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <unistd.h>
#include <sys/utsname.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->TabWidget);
    testTimer = new QTimer();
    this->setWindowTitle("TaskManagement");
    disCpuInfo(0);
    disSysInfo();
    testTimer->start(1000);
    connect(testTimer,SIGNAL(timeout()),SLOT(disCpuInfo()));
    connect(testTimer,SIGNAL(timeout()),SLOT(disSysInfo()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete testTimer;
}

void MainWindow::disSysInfo()
{
    struct utsname buf;
    struct sysinfo info;
    QString hour,min,sec;
    time_t cur_time = 0;
    time_t boot_time = 0;
    ui->logname->setText(getenv("LOGNAME"));
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
    }

}

void MainWindow::disCpuInfo(int choose)
{
    static double totalCpuTime[5]={0},idleTime[5]={0};
    double totalCpuTime1=0,idleTime1=0;
    int utilization=0;
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

}
