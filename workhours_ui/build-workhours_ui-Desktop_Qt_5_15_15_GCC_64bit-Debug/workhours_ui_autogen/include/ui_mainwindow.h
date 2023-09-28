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
    QLabel *label;
    QLineEdit *lineEdit_start_hh;
    QLineEdit *lineEdit_start_mm;
    QLabel *label_2;
    QLineEdit *lineEdit_end_hh;
    QLabel *label_7;
    QLabel *label_3;
    QLineEdit *lineEdit_end_mm;
    QLabel *label_5;
    QLabel *label_8;
    QPushButton *pushButton;
    QLabel *gif_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(417, 382);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 150, 399, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(9, 176, 110, 17));
        lcdNumber_length_total_hh = new QLCDNumber(centralwidget);
        lcdNumber_length_total_hh->setObjectName(QString::fromUtf8("lcdNumber_length_total_hh"));
        lcdNumber_length_total_hh->setGeometry(QRect(9, 216, 37, 23));
        lcdNumber_length_total_hh->setDigitCount(2);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(111, 216, 18, 17));
        lcdNumber_length_total_mm = new QLCDNumber(centralwidget);
        lcdNumber_length_total_mm->setObjectName(QString::fromUtf8("lcdNumber_length_total_mm"));
        lcdNumber_length_total_mm->setGeometry(QRect(135, 216, 37, 23));
        lcdNumber_length_total_mm->setDigitCount(2);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(237, 216, 26, 17));
        lcdNumber_length_total_dec = new QLCDNumber(centralwidget);
        lcdNumber_length_total_dec->setObjectName(QString::fromUtf8("lcdNumber_length_total_dec"));
        lcdNumber_length_total_dec->setGeometry(QRect(269, 216, 55, 23));
        lcdNumber_length_total_dec->setDigitCount(4);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(355, 216, 53, 17));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(9, 255, 171, 17));
        lcdNumber_length_no_lunch_hh = new QLCDNumber(centralwidget);
        lcdNumber_length_no_lunch_hh->setObjectName(QString::fromUtf8("lcdNumber_length_no_lunch_hh"));
        lcdNumber_length_no_lunch_hh->setGeometry(QRect(9, 295, 37, 23));
        lcdNumber_length_no_lunch_hh->setDigitCount(2);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(111, 295, 18, 17));
        lcdNumber_length_no_lunch_mm = new QLCDNumber(centralwidget);
        lcdNumber_length_no_lunch_mm->setObjectName(QString::fromUtf8("lcdNumber_length_no_lunch_mm"));
        lcdNumber_length_no_lunch_mm->setGeometry(QRect(135, 295, 37, 23));
        lcdNumber_length_no_lunch_mm->setDigitCount(2);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(237, 295, 26, 17));
        lcdNumber_length_no_lunch_dec = new QLCDNumber(centralwidget);
        lcdNumber_length_no_lunch_dec->setObjectName(QString::fromUtf8("lcdNumber_length_no_lunch_dec"));
        lcdNumber_length_no_lunch_dec->setGeometry(QRect(269, 295, 55, 23));
        lcdNumber_length_no_lunch_dec->setDigitCount(4);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(355, 295, 53, 17));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 69, 17));
        lineEdit_start_hh = new QLineEdit(centralwidget);
        lineEdit_start_hh->setObjectName(QString::fromUtf8("lineEdit_start_hh"));
        lineEdit_start_hh->setGeometry(QRect(2, 39, 96, 25));
        lineEdit_start_mm = new QLineEdit(centralwidget);
        lineEdit_start_mm->setObjectName(QString::fromUtf8("lineEdit_start_mm"));
        lineEdit_start_mm->setGeometry(QRect(128, 39, 96, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(2, 70, 61, 17));
        lineEdit_end_hh = new QLineEdit(centralwidget);
        lineEdit_end_hh->setObjectName(QString::fromUtf8("lineEdit_end_hh"));
        lineEdit_end_hh->setGeometry(QRect(2, 110, 96, 25));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(104, 39, 18, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(104, 110, 18, 17));
        lineEdit_end_mm = new QLineEdit(centralwidget);
        lineEdit_end_mm->setObjectName(QString::fromUtf8("lineEdit_end_mm"));
        lineEdit_end_mm->setGeometry(QRect(128, 110, 96, 25));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 39, 26, 17));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 110, 26, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 100, 111, 41));
        gif_label = new QLabel(centralwidget);
        gif_label->setObjectName(QString::fromUtf8("gif_label"));
        gif_label->setGeometry(QRect(290, 20, 61, 61));
        gif_label->setMinimumSize(QSize(50, 50));
        gif_label->setPixmap(QPixmap(QString::fromUtf8(":/fonts/piis_iso.gif")));
        gif_label->setScaledContents(true);
        gif_label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 417, 22));
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
        label_4->setText(QCoreApplication::translate("MainWindow", "Day length total", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "hh", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "h in dec", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Day length without lunch", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "hh", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "h in dec", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Start time", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "End time", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "hh", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "hh", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "mm", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        gif_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
