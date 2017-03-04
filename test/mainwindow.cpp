#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>
#include <sstream>
#include <QString>
#include <fstream>
using namespace std;

MainWindow::MainWindow(QWidget *parent, int disChoose) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    testTimer = new QTimer();
    ui->label->clear();
    if(disChoose==0){
        //testTimer = new QTimer();
        this->setWindowTitle("TIME");
        testTimer->start(1000);
        connect(testTimer,SIGNAL(timeout()),SLOT(getTime()));
        getTime();
    }
    else if(disChoose==1){
        //testTimer = new QTimer();
        this->setWindowTitle("CPUinfo");
        testTimer->start(2000);
        connect(testTimer,SIGNAL(timeout()),SLOT(disCpuInfo()));
        disCpuInfo();
    }
    else{
        //testTimer = new QTimer();
        this->setWindowTitle("Accumulator");
        testTimer->start(3000);
        connect(testTimer,SIGNAL(timeout()),SLOT(disCalculator()));
        disCalculator();
    }
}

MainWindow::~MainWindow()
{
    delete testTimer;
    delete ui;
}

void MainWindow::getTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss");
    ui->label->setText(str);
}

void MainWindow::disCpuInfo()
{
    static double totalCpuTime=0,idleTime=0;
    double totalCpuTime1,idleTime1;
    double utilization;
    string trash;
    ifstream fs;
    stringstream ss;
    system("cat /proc/stat | grep \"cpu \" > stat.txt");
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
    if(totalCpuTime==0)
    {
        totalCpuTime=totalCpuTime1;
        idleTime=idleTime1;
        return;
    }
    utilization=(idleTime1-idleTime)*100/(totalCpuTime1-totalCpuTime);
    utilization=100-utilization;
    QString toLabel=QString::number(utilization);
    ui->label->setText(toLabel+'%');
    totalCpuTime=totalCpuTime1;
    idleTime=idleTime1;
}

void MainWindow::disCalculator()
{
    static int i=0,sum=0;
    sum+=i;
    i+=1;
    if(i<=100)
        ui->label->setNum(sum);
}
