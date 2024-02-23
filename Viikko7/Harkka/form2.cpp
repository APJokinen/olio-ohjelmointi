#include "form2.h"
#include "ui_form2.h"

form2::form2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form2)
{
    ui->setupUi(this);
}

form2::~form2()
{
    delete ui;
}

void form2::setNameFromMainwindow(const QString &newNameFromMainwindow)
{
    nameFromMainwindow = newNameFromMainwindow;
    ui->labelAddName->setText(nameFromMainwindow);
}

void form2::on_btnSave_clicked()
{
    lname = ui->leLname->text();
    emit lnameIsSet();
    qDebug() << lname;
}

QString form2::getLname() const
{
    return lname;
}

void form2::setLname(const QString &newLname)
{
    lname = newLname;
}

