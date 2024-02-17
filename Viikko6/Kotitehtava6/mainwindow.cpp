#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_btnCount_clicked()
{
    laskuri++;
    ui->lineEdit->setText(QString::number(laskuri));

}


void MainWindow::on_btnReset_clicked()
{
    laskuri = 0;
    ui->lineEdit->setText(QString::number(laskuri));
}

