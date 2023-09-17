#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // store/use inputs from line edits in function that calculates
    // display results in text labels

    ui->lcdNumber_length_total->display(/*calc*/6.66);
    ui->label_length_total_hh->setText("kukku");

}

