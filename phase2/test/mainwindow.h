#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, int disChoose=0);
    ~MainWindow();

public slots:
    void getTime();
    void disCpuInfo();
    void disCalculator();
signals:
private:
    Ui::MainWindow *ui;
    QTimer * testTimer;
};

#endif // MAINWINDOW_H
