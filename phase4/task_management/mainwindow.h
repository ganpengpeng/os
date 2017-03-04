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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void disCpuInfo(int choose = 0);
    void disSysInfo();

private:
    Ui::MainWindow *ui;
    QTimer * testTimer;
};

#endif // MAINWINDOW_H
