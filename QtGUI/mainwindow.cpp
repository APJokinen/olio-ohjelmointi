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
    ui=nullptr;
}


void MainWindow::on_btnTestaa_clicked()
{
    //x++;
    //QString s = QString::number(x);
    qDebug() << "Painiketta painettu";
    ui->labelResult->setText("TESTI");
}

