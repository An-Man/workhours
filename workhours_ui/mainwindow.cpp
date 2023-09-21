#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "time.h"

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
    // create worksday object, store inputs from line edits in the member variables
    Workday workday;

    if (!ui->lineEdit_start_hh->text().isEmpty()) {
        workday.start.hours = std::stoi(ui->lineEdit_start_hh->text().toStdString());
    }
    if (!ui->lineEdit_start_mm->text().isEmpty()) {
        workday.start.minutes = std::stoi(ui->lineEdit_start_mm->text().toStdString());
    }
    if (!ui->lineEdit_end_hh->text().isEmpty()) {
        workday.end.hours = std::stoi(ui->lineEdit_end_hh->text().toStdString());
    }
    if (!ui->lineEdit_end_mm->text().isEmpty()) {
        workday.end.minutes = std::stoi(ui->lineEdit_end_mm->text().toStdString());
    }

    // add input validation

    // calculate the lengths
    workday.calculate_lengths();  // fix negative value!

    // display results in lcd widgets
    ui->lcdNumber_length_total_hh->display(workday.length_in_hh_mm.hours);
    ui->lcdNumber_length_total_mm->display(workday.length_in_hh_mm.minutes);
    ui->lcdNumber_length_total_dec->display(workday.length_in_decimal);

    ui->lcdNumber_length_no_lunch_hh->display(workday.length_in_hh_mm_minus_lunch.hours);
    ui->lcdNumber_length_no_lunch_mm->display(workday.length_in_hh_mm_minus_lunch.minutes);
    ui->lcdNumber_length_no_lunch_dec->display(workday.length_in_decimal_minus_lunch);
}

