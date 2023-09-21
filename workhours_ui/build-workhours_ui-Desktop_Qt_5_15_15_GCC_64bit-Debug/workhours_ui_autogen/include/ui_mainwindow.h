/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_start_hh;
    QLabel *label_3;
    QLineEdit *lineEdit_start_mm;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_end_hh;
    QLabel *label_7;
    QLineEdit *lineEdit_end_mm;
    QLabel *label_8;
    QFrame *line;
    QLabel *label_4;
    QLCDNumber *lcdNumber_length_total_hh;
    QLabel *label_10;
    QLCDNumber *lcdNumber_length_total_mm;
    QLabel *label_9;
    QLCDNumber *lcdNumber_length_total_dec;
    QLabel *label_13;
    QLabel *label_6;
    QLCDNumber *lcdNumber_length_no_lunch_hh;
    QLabel *label_12;
    QLCDNumber *lcdNumber_length_no_lunch_mm;
    QLabel *label_11;
    QLCDNumber *lcdNumber_length_no_lunch_dec;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(371, 382);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_start_hh = new QLineEdit(centralwidget);
        lineEdit_start_hh->setObjectName(QString::fromUtf8("lineEdit_start_hh"));

        gridLayout->addWidget(lineEdit_start_hh, 1, 0, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        lineEdit_start_mm = new QLineEdit(centralwidget);
        lineEdit_start_mm->setObjectName(QString::fromUtf8("lineEdit_start_mm"));

        gridLayout->addWidget(lineEdit_start_mm, 1, 3, 1, 3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 6, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 7, 1, 2);

        lineEdit_end_hh = new QLineEdit(centralwidget);
        lineEdit_end_hh->setObjectName(QString::fromUtf8("lineEdit_end_hh"));

        gridLayout->addWidget(lineEdit_end_hh, 3, 0, 1, 2);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 2, 1, 1);

        lineEdit_end_mm = new QLineEdit(centralwidget);
        lineEdit_end_mm->setObjectName(QString::fromUtf8("lineEdit_end_mm"));

        gridLayout->addWidget(lineEdit_end_mm, 3, 3, 1, 3);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 6, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 4, 0, 1, 9);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 3);

        lcdNumber_length_total_hh = new QLCDNumber(centralwidget);
        lcdNumber_length_total_hh->setObjectName(QString::fromUtf8("lcdNumber_length_total_hh"));
        lcdNumber_length_total_hh->setDigitCount(2);

        gridLayout->addWidget(lcdNumber_length_total_hh, 6, 0, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 6, 1, 1, 1);

        lcdNumber_length_total_mm = new QLCDNumber(centralwidget);
        lcdNumber_length_total_mm->setObjectName(QString::fromUtf8("lcdNumber_length_total_mm"));
        lcdNumber_length_total_mm->setDigitCount(2);

        gridLayout->addWidget(lcdNumber_length_total_mm, 6, 2, 1, 2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 6, 4, 1, 1);

        lcdNumber_length_total_dec = new QLCDNumber(centralwidget);
        lcdNumber_length_total_dec->setObjectName(QString::fromUtf8("lcdNumber_length_total_dec"));
        lcdNumber_length_total_dec->setDigitCount(4);

        gridLayout->addWidget(lcdNumber_length_total_dec, 6, 5, 1, 3);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 6, 8, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 7, 0, 1, 4);

        lcdNumber_length_no_lunch_hh = new QLCDNumber(centralwidget);
        lcdNumber_length_no_lunch_hh->setObjectName(QString::fromUtf8("lcdNumber_length_no_lunch_hh"));
        lcdNumber_length_no_lunch_hh->setDigitCount(2);

        gridLayout->addWidget(lcdNumber_length_no_lunch_hh, 8, 0, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 8, 1, 1, 1);

        lcdNumber_length_no_lunch_mm = new QLCDNumber(centralwidget);
        lcdNumber_length_no_lunch_mm->setObjectName(QString::fromUtf8("lcdNumber_length_no_lunch_mm"));
        lcdNumber_length_no_lunch_mm->setDigitCount(2);

        gridLayout->addWidget(lcdNumber_length_no_lunch_mm, 8, 2, 1, 2);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 8, 4, 1, 1);

        lcdNumber_length_no_lunch_dec = new QLCDNumber(centralwidget);
        lcdNumber_length_no_lunch_dec->setObjectName(QString::fromUtf8("lcdNumber_length_no_lunch_dec"));
        lcdNumber_length_no_lunch_dec->setDigitCount(4);

        gridLayout->addWidget(lcdNumber_length_no_lunch_dec, 8, 5, 1, 3);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 8, 8, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 371, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "workhours", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Start time", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "hh", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "End time", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "hh", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Day length total", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "hh", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "h in dec", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Day length without lunch", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "hh", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "h in dec", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
