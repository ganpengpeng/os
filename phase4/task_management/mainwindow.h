#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QListWidget>
#include <QMainWindow>
#include <QLabel>
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
    void getTime();
    void disMemInfo();
    void disProInfo();
    void setChooseItem(QListWidgetItem *item);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QTimer * testTimer;
    QLabel *cpustatus,*cpu;
    QLabel *memstatus,*mem;
    QLabel *timestatus,*times;
    QListWidgetItem *chooseItem;
};

#endif // MAINWINDOW_H
