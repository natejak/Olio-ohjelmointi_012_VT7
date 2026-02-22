#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->counterLineEdit->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    counter++;
    ui->counterLineEdit->setText(QString::number(counter));
    //1. Read the number
    //2. Grow by one
    //3. give the number back
}


void MainWindow::on_pushButton_RESET_clicked()
{

    // 1. Reset to /
    counter = 0;
    ui->counterLineEdit->setText("0");

}

