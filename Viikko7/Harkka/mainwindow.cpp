#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <Form2.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    form2 * objectForm2 = new form2(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSave_clicked()
{

    fname = ui->le1->text();
    ui->labelResult->setText("Terve " + fname);
}

void MainWindow::slotLnameShow()
{
    QString lname = objectForm2->getLname();
    //Allaolevassa voi olla label väärin
    ui->labelResult->setText(lname);
}


void MainWindow::on_btnOpenForm2_clicked()
{

    connect(objectForm2, SIGNAL(lnameIsSet()), this, SLOT(slotLnameShow()));
    objectForm2->setNameFromMainwindow(fname);
    //objectForm2->show();
    objectForm2->open();
}

