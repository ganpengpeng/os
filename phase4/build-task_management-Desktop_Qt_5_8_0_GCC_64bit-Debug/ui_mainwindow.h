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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QTabWidget *TabWidget;
    QWidget *cpuPage;
    QGridLayout *gridLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QLabel *label_2;
    QProgressBar *progressBar_2;
    QLabel *label_3;
    QProgressBar *progressBar_3;
    QLabel *label_4;
    QProgressBar *progressBar_4;
    QLabel *label_5;
    QProgressBar *progressBar_5;
    QWidget *processorPage;
    QGridLayout *gridLayout_5;
    QListWidget *listWidget;
    QLabel *label_34;
    QLabel *runningpro;
    QLabel *label_36;
    QLabel *sleeppro;
    QLabel *label_38;
    QLabel *zombiepro;
    QPushButton *pushButton_3;
    QWidget *memoryPage;
    QGridLayout *gridLayout_2;
    QLabel *totalswap;
    QLabel *freeswap;
    QLabel *label_25;
    QLabel *label_21;
    QLabel *bufferram;
    QLabel *label_13;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_26;
    QLabel *label_15;
    QLabel *label_22;
    QLabel *freeram;
    QLabel *cached;
    QLabel *label_19;
    QLabel *label_24;
    QLabel *label_23;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *available;
    QLabel *sharedram;
    QLabel *totalram;
    QLabel *label_20;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QProgressBar *memprogressBar;
    QWidget *systemPage;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *version;
    QLabel *label_12;
    QLabel *kernel;
    QLabel *runtime;
    QLabel *label_6;
    QLabel *boottime;
    QLabel *label_16;
    QLabel *label_11;
    QLabel *cpu;
    QLabel *machine;
    QLabel *release;
    QLabel *hostname;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *logname;
    QLabel *label_7;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(698, 533);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        TabWidget = new QTabWidget(centralWidget);
        TabWidget->setObjectName(QStringLiteral("TabWidget"));
        TabWidget->setTabPosition(QTabWidget::North);
        TabWidget->setTabShape(QTabWidget::Rounded);
        TabWidget->setDocumentMode(false);
        TabWidget->setTabsClosable(false);
        TabWidget->setMovable(true);
        cpuPage = new QWidget();
        cpuPage->setObjectName(QStringLiteral("cpuPage"));
        gridLayout = new QGridLayout(cpuPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(cpuPage);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        progressBar = new QProgressBar(cpuPage);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 0, 1, 1, 1);

        label_2 = new QLabel(cpuPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setTextFormat(Qt::AutoText);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        progressBar_2 = new QProgressBar(cpuPage);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setValue(24);

        gridLayout->addWidget(progressBar_2, 1, 1, 1, 1);

        label_3 = new QLabel(cpuPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        progressBar_3 = new QProgressBar(cpuPage);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setValue(24);

        gridLayout->addWidget(progressBar_3, 2, 1, 1, 1);

        label_4 = new QLabel(cpuPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setTextFormat(Qt::AutoText);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        progressBar_4 = new QProgressBar(cpuPage);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setValue(24);

        gridLayout->addWidget(progressBar_4, 3, 1, 1, 1);

        label_5 = new QLabel(cpuPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setTextFormat(Qt::AutoText);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        progressBar_5 = new QProgressBar(cpuPage);
        progressBar_5->setObjectName(QStringLiteral("progressBar_5"));
        progressBar_5->setValue(24);

        gridLayout->addWidget(progressBar_5, 4, 1, 1, 1);

        TabWidget->addTab(cpuPage, QString());
        processorPage = new QWidget();
        processorPage->setObjectName(QStringLiteral("processorPage"));
        gridLayout_5 = new QGridLayout(processorPage);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        listWidget = new QListWidget(processorPage);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setSortingEnabled(false);

        gridLayout_5->addWidget(listWidget, 0, 0, 1, 7);

        label_34 = new QLabel(processorPage);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_34, 1, 0, 1, 1);

        runningpro = new QLabel(processorPage);
        runningpro->setObjectName(QStringLiteral("runningpro"));

        gridLayout_5->addWidget(runningpro, 1, 1, 1, 1);

        label_36 = new QLabel(processorPage);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_36, 1, 2, 1, 1);

        sleeppro = new QLabel(processorPage);
        sleeppro->setObjectName(QStringLiteral("sleeppro"));

        gridLayout_5->addWidget(sleeppro, 1, 3, 1, 1);

        label_38 = new QLabel(processorPage);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_38, 1, 4, 1, 1);

        zombiepro = new QLabel(processorPage);
        zombiepro->setObjectName(QStringLiteral("zombiepro"));

        gridLayout_5->addWidget(zombiepro, 1, 5, 1, 1);

        pushButton_3 = new QPushButton(processorPage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_5->addWidget(pushButton_3, 1, 6, 1, 1);

        TabWidget->addTab(processorPage, QString());
        memoryPage = new QWidget();
        memoryPage->setObjectName(QStringLiteral("memoryPage"));
        gridLayout_2 = new QGridLayout(memoryPage);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        totalswap = new QLabel(memoryPage);
        totalswap->setObjectName(QStringLiteral("totalswap"));
        totalswap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(totalswap, 10, 1, 1, 1);

        freeswap = new QLabel(memoryPage);
        freeswap->setObjectName(QStringLiteral("freeswap"));
        freeswap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(freeswap, 10, 5, 1, 1);

        label_25 = new QLabel(memoryPage);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_25, 10, 4, 1, 1);

        label_21 = new QLabel(memoryPage);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_21, 9, 4, 1, 1);

        bufferram = new QLabel(memoryPage);
        bufferram->setObjectName(QStringLiteral("bufferram"));
        bufferram->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(bufferram, 9, 5, 1, 1);

        label_13 = new QLabel(memoryPage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);
        label_13->setTextFormat(Qt::AutoText);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_13, 4, 0, 1, 1);

        label_27 = new QLabel(memoryPage);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_27, 10, 0, 1, 1);

        label_28 = new QLabel(memoryPage);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setEnabled(false);

        gridLayout_2->addWidget(label_28, 3, 0, 1, 1);

        label_29 = new QLabel(memoryPage);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setEnabled(false);

        gridLayout_2->addWidget(label_29, 5, 0, 1, 1);

        label_26 = new QLabel(memoryPage);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_2->addWidget(label_26, 10, 2, 1, 1);

        label_15 = new QLabel(memoryPage);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 8, 4, 1, 1);

        label_22 = new QLabel(memoryPage);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_22, 6, 4, 1, 1);

        freeram = new QLabel(memoryPage);
        freeram->setObjectName(QStringLiteral("freeram"));
        freeram->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(freeram, 6, 5, 1, 1);

        cached = new QLabel(memoryPage);
        cached->setObjectName(QStringLiteral("cached"));
        cached->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(cached, 9, 1, 1, 1);

        label_19 = new QLabel(memoryPage);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_2->addWidget(label_19, 6, 2, 1, 1);

        label_24 = new QLabel(memoryPage);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_2->addWidget(label_24, 9, 2, 1, 1);

        label_23 = new QLabel(memoryPage);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_2->addWidget(label_23, 8, 2, 1, 1);

        label_17 = new QLabel(memoryPage);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_17, 8, 0, 1, 1);

        label_18 = new QLabel(memoryPage);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_18, 6, 0, 1, 1);

        available = new QLabel(memoryPage);
        available->setObjectName(QStringLiteral("available"));
        available->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(available, 8, 1, 1, 1);

        sharedram = new QLabel(memoryPage);
        sharedram->setObjectName(QStringLiteral("sharedram"));
        sharedram->setEnabled(true);
        sharedram->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(sharedram, 8, 5, 1, 1);

        totalram = new QLabel(memoryPage);
        totalram->setObjectName(QStringLiteral("totalram"));
        totalram->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(totalram, 6, 1, 1, 1);

        label_20 = new QLabel(memoryPage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_20, 9, 0, 1, 1);

        label_30 = new QLabel(memoryPage);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_2->addWidget(label_30, 6, 6, 1, 1);

        label_31 = new QLabel(memoryPage);
        label_31->setObjectName(QStringLiteral("label_31"));

        gridLayout_2->addWidget(label_31, 8, 6, 1, 1);

        label_32 = new QLabel(memoryPage);
        label_32->setObjectName(QStringLiteral("label_32"));

        gridLayout_2->addWidget(label_32, 9, 6, 1, 1);

        label_33 = new QLabel(memoryPage);
        label_33->setObjectName(QStringLiteral("label_33"));

        gridLayout_2->addWidget(label_33, 10, 6, 1, 1);

        memprogressBar = new QProgressBar(memoryPage);
        memprogressBar->setObjectName(QStringLiteral("memprogressBar"));
        memprogressBar->setValue(24);

        gridLayout_2->addWidget(memprogressBar, 4, 1, 1, 5);

        TabWidget->addTab(memoryPage, QString());
        systemPage = new QWidget();
        systemPage->setObjectName(QStringLiteral("systemPage"));
        gridLayout_3 = new QGridLayout(systemPage);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_8 = new QLabel(systemPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        label_14 = new QLabel(systemPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_14, 5, 0, 1, 1);

        version = new QLabel(systemPage);
        version->setObjectName(QStringLiteral("version"));

        gridLayout_3->addWidget(version, 5, 1, 1, 3);

        label_12 = new QLabel(systemPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_12, 2, 2, 1, 1);

        kernel = new QLabel(systemPage);
        kernel->setObjectName(QStringLiteral("kernel"));

        gridLayout_3->addWidget(kernel, 3, 1, 1, 1);

        runtime = new QLabel(systemPage);
        runtime->setObjectName(QStringLiteral("runtime"));

        gridLayout_3->addWidget(runtime, 1, 1, 1, 1);

        label_6 = new QLabel(systemPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 0, 2, 1, 1);

        boottime = new QLabel(systemPage);
        boottime->setObjectName(QStringLiteral("boottime"));
        boottime->setScaledContents(true);
        boottime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        boottime->setWordWrap(false);
        boottime->setIndent(-1);

        gridLayout_3->addWidget(boottime, 0, 1, 1, 1);

        label_16 = new QLabel(systemPage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_16, 3, 0, 1, 1);

        label_11 = new QLabel(systemPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_11, 3, 2, 1, 1);

        cpu = new QLabel(systemPage);
        cpu->setObjectName(QStringLiteral("cpu"));

        gridLayout_3->addWidget(cpu, 2, 1, 1, 1);

        machine = new QLabel(systemPage);
        machine->setObjectName(QStringLiteral("machine"));

        gridLayout_3->addWidget(machine, 2, 3, 1, 1);

        release = new QLabel(systemPage);
        release->setObjectName(QStringLiteral("release"));

        gridLayout_3->addWidget(release, 3, 3, 1, 1);

        hostname = new QLabel(systemPage);
        hostname->setObjectName(QStringLiteral("hostname"));

        gridLayout_3->addWidget(hostname, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(systemPage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 7, 3, 1, 1);

        pushButton = new QPushButton(systemPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_3->addWidget(pushButton, 7, 2, 1, 1);

        label_10 = new QLabel(systemPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_10, 1, 0, 1, 1);

        label_9 = new QLabel(systemPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_9, 1, 2, 1, 1);

        logname = new QLabel(systemPage);
        logname->setObjectName(QStringLiteral("logname"));

        gridLayout_3->addWidget(logname, 1, 3, 1, 1);

        label_7 = new QLabel(systemPage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        TabWidget->addTab(systemPage, QString());

        gridLayout_4->addWidget(TabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        TabWidget->setCurrentIndex(1);


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
        label_34->setText(QApplication::translate("MainWindow", "Running :", Q_NULLPTR));
        runningpro->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "Sleep :", Q_NULLPTR));
        sleeppro->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_38->setText(QApplication::translate("MainWindow", "Zombie :", Q_NULLPTR));
        zombiepro->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "End", Q_NULLPTR));
        TabWidget->setTabText(TabWidget->indexOf(processorPage), QApplication::translate("MainWindow", "PROCESS", Q_NULLPTR));
        totalswap->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        freeswap->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Free Swap :", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Buffer Ram :", Q_NULLPTR));
        bufferram->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "MEMORY", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "Total Swap :", Q_NULLPTR));
        label_28->setText(QString());
        label_29->setText(QString());
        label_26->setText(QApplication::translate("MainWindow", "KB", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Shared Ram :", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Free Ram :", Q_NULLPTR));
        freeram->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        cached->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "KB", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "KB", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "KB", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Available : ", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Total Ram :", Q_NULLPTR));
        available->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        sharedram->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        totalram->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Cached : ", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "KB", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "KB", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "KB", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "KB", Q_NULLPTR));
        TabWidget->setTabText(TabWidget->indexOf(memoryPage), QApplication::translate("MainWindow", "MEMORY", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Boot time :", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Version :", Q_NULLPTR));
        version->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Machine :", Q_NULLPTR));
        kernel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        runtime->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Host name :", Q_NULLPTR));
        boottime->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Kernel :", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "release :", Q_NULLPTR));
        cpu->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        machine->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        release->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        hostname->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "REBOOT", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "SHUTDOWN", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Run time :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Log name :", Q_NULLPTR));
        logname->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Cpu :", Q_NULLPTR));
        TabWidget->setTabText(TabWidget->indexOf(systemPage), QApplication::translate("MainWindow", "SYSTEM", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
