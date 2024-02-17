#include "form2.h"
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




void MainWindow::on_btnMuuta_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug() << "Painiketta painettu";
    ui->labelMuuttuu->setText("TESTI " +s+ " painettu");
}


void MainWindow::on_btnTallenna_clicked()
{
    fname=ui->kenttaEtunimi->text();
    lname=ui->kenttaSukunimi->text();
    ui->labelNimi->setText(fname + " " + lname);
}


void MainWindow::on_btnOpenForm2_clicked()
{
    qDebug() << "btnOpenForm2 klikattu";
    Form2 * objectForm2 = new Form2(this);
    objectForm2->setFname(fname);
    objectForm2->setLname(lname);
    //objectForm2->open(); //Mainwindow:iin ei voi kirjoittaa, jos form2 auki
    objectForm2->show(); //Mainwindow:iin voi kirjoittaa, vaikka form2 auki

}

