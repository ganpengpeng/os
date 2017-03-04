#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w0(0,0),w1(0,1),w2(0,2);
    w0.show();
    w1.show();
    w2.show();
    return a.exec();
}
