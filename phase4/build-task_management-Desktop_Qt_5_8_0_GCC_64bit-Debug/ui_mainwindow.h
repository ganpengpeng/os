/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *TabWidget;
    QWidget *cpuPage;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_4;
    QProgressBar *progressBar_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *processorPage;
    QWidget *memoryPage;
    QWidget *systemPage;
    QLabel *label_6;
    QLabel *hostname;
    QLabel *label_8;
    QLabel *boottime;
    QLabel *runtime;
    QLabel *label_10;
    QLabel *cpu;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *version;
    QLabel *label_9;
    QLabel *logname;
    QLabel *kernel;
    QLabel *test;
    QLabel *label_11;
    QLabel *release;
    QLabel *label_12;
    QLabel *machine;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(766, 635);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TabWidget = new QTabWidget(centralWidget);
        TabWidget->setObjectName(QStringLiteral("TabWidget"));
        TabWidget->setGeometry(QRect(0, 0, 761, 611));
        TabWidget->setTabPosition(QTabWidget::North);
        TabWidget->setTabShape(QTabWidget::Rounded);
        TabWidget->setDocumentMode(false);
        TabWidget->setTabsClosable(false);
        TabWidget->setMovable(true);
        cpuPage = new QWidget();
        cpuPage->setObjectName(QStringLiteral("cpuPage"));
        progressBar = new QProgressBar(cpuPage);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(220, 20, 441, 51));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(cpuPage);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(220, 150, 441, 51));
        progressBar_2->setValue(24);
        progressBar_3 = new QProgressBar(cpuPage);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setGeometry(QRect(220, 260, 441, 51));
        progressBar_3->setValue(24);
        progressBar_4 = new QProgressBar(cpuPage);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setGeometry(QRect(220, 380, 441, 51));
        progressBar_4->setValue(24);
        progressBar_5 = new QProgressBar(cpuPage);
        progressBar_5->setObjectName(QStringLiteral("progressBar_5"));
        progressBar_5->setGeometry(QRect(220, 490, 441, 51));
        progressBar_5->setValue(24);
        label = new QLabel(cpuPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 71, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(cpuPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 150, 71, 51));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(cpuPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 260, 71, 51));
        label_3->setFont(font);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(cpuPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 380, 71, 51));
        label_4->setFont(font);
        label_4->setTextFormat(Qt::AutoText);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(cpuPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 490, 71, 51));
        label_5->setFont(font);
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TabWidget->addTab(cpuPage, QString());
        processorPage = new QWidget();
        processorPage->setObjectName(QStringLiteral("processorPage"));
        TabWidget->addTab(processorPage, QString());
        memoryPage = new QWidget();
        memoryPage->setObjectName(QStringLiteral("memoryPage"));
        TabWidget->addTab(memoryPage, QString());
        systemPage = new QWidget();
        systemPage->setObjectName(QStringLiteral("systemPage"));
        label_6 = new QLabel(systemPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 50, 91, 21));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hostname = new QLabel(systemPage);
        hostname->setObjectName(QStringLiteral("hostname"));
        hostname->setGeometry(QRect(150, 50, 67, 21));
        label_8 = new QLabel(systemPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(400, 120, 81, 21));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        boottime = new QLabel(systemPage);
        boottime->setObjectName(QStringLiteral("boottime"));
        boottime->setGeometry(QRect(500, 120, 231, 41));
        runtime = new QLabel(systemPage);
        runtime->setObjectName(QStringLiteral("runtime"));
        runtime->setGeometry(QRect(150, 120, 67, 21));
        label_10 = new QLabel(systemPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 120, 81, 21));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cpu = new QLabel(systemPage);
        cpu->setObjectName(QStringLiteral("cpu"));
        cpu->setGeometry(QRect(150, 180, 67, 17));
        label_7 = new QLabel(systemPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 180, 91, 16));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(systemPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 290, 91, 16));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_16 = new QLabel(systemPage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(40, 240, 91, 21));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        version = new QLabel(systemPage);
        version->setObjectName(QStringLiteral("version"));
        version->setGeometry(QRect(150, 290, 491, 17));
        label_9 = new QLabel(systemPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(400, 50, 81, 21));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        logname = new QLabel(systemPage);
        logname->setObjectName(QStringLiteral("logname"));
        logname->setGeometry(QRect(500, 50, 67, 21));
        kernel = new QLabel(systemPage);
        kernel->setObjectName(QStringLiteral("kernel"));
        kernel->setGeometry(QRect(150, 240, 151, 21));
        test = new QLabel(systemPage);
        test->setObjectName(QStringLiteral("test"));
        test->setGeometry(QRect(90, 370, 341, 21));
        test->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_11 = new QLabel(systemPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(400, 240, 81, 21));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        release = new QLabel(systemPage);
        release->setObjectName(QStringLiteral("release"));
        release->setGeometry(QRect(500, 240, 211, 21));
        label_12 = new QLabel(systemPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(410, 180, 67, 21));
        machine = new QLabel(systemPage);
        machine->setObjectName(QStringLiteral("machine"));
        machine->setGeometry(QRect(500, 180, 81, 21));
        TabWidget->addTab(systemPage, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "CPU", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "CORE 1", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "CORE 2", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "CORE 3", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "CORE 4", Q_NULLPTR));
        TabWidget->setTabText(TabWidget->indexOf(cpuPage), QApplication::translate("MainWindow", "CPU", Q_NULLPTR));
        TabWidget->setTabText(TabWidget->indexOf(processorPage), QApplication::translate("MainWindow", "PROCESS", Q_NULLPTR));
        TabWidget->setTabText(TabWidget->indexOf(memoryPage), QApplication::translate("MainWindow", "MEMORY", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Host name :", Q_NULLPTR));
        hostname->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Boot time :", Q_NULLPTR));
        boottime->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        runtime->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Run time :", Q_NULLPTR));
        cpu->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Cpu :", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Version :", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Kernel :", Q_NULLPTR));
        version->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Log name :", Q_NULLPTR));
        logname->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        kernel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        test->setText(QApplication::translate("MainWindow", "Version :", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "release :", Q_NULLPTR));
        release->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Machine :", Q_NULLPTR));
        machine->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        TabWidget->setTabText(TabWidget->indexOf(systemPage), QApplication::translate("MainWindow", "SYSTEM", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
