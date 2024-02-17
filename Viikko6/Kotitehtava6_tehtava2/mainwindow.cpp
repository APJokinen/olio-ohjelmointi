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

void MainWindow::numberClickHandler()
{
    if(state == 1){
        number1 += apu;
        ui->num1->setText(number1);
    }else{
        number2 += apu;
        ui->num2->setText(number2);
    }

}

void MainWindow::clearAndEnterClickHandler()
{

}

void MainWindow::addSubMulDivCLickHandler()
{
    state = 2;
}





void MainWindow::on_N1_clicked()
{
    qDebug()<< "Button name: N1";
    apu = QString::number(1);


    numberClickHandler();
}


void MainWindow::on_N2_clicked()
{
        qDebug()<< "Button name: N2";
    apu = QString::number(2);
        numberClickHandler();
}


void MainWindow::on_N3_clicked()
{
        qDebug()<< "Button name: N3";
        apu = QString::number(3);
        numberClickHandler();
}


void MainWindow::on_N4_clicked()
{
        qDebug()<< "Button name: N4";
        apu = QString::number(4);
        numberClickHandler();
}


void MainWindow::on_N5_clicked()
{
        qDebug()<< "Button name: N5";
        apu = QString::number(5);
        numberClickHandler();
}


void MainWindow::on_N6_clicked()
{
        qDebug()<< "Button name: N6";
        apu = QString::number(6);
        numberClickHandler();
}


void MainWindow::on_N7_clicked()
{
        qDebug()<< "Button name: N7";
        apu = QString::number(7);
        numberClickHandler();
}


void MainWindow::on_N8_clicked()
{
        qDebug()<< "Button name: N8";
        apu = QString::number(8);
        numberClickHandler();
}


void MainWindow::on_N9_clicked()
{
        qDebug()<< "Button name: N9";
        apu = QString::number(9);
        numberClickHandler();
}


void MainWindow::on_N0_clicked()
{
        qDebug()<< "Button name: N0";
        apu = QString::number(0);
        numberClickHandler();
}


void MainWindow::on_add_clicked()
{
        operand = 0;
        addSubMulDivCLickHandler();
}


void MainWindow::on_sub_clicked()
{
    operand = 1;
        addSubMulDivCLickHandler();
}


void MainWindow::on_mul_clicked()
{
    operand = 2;
        addSubMulDivCLickHandler();
}


void MainWindow::on_div_clicked()
{
    operand = 3;
        addSubMulDivCLickHandler();
}


void MainWindow::on_clear_clicked()
{
        qDebug()<< "Clear clicked";
        state = 1;
        number1="";
        number2="";
        ui->num1->setText("");
        ui->num2->setText("");
        ui->result->setText("");

}


void MainWindow::on_enter_clicked()
{
        float luku1 = number1.toFloat();
        float luku2 = number2.toFloat();
        QString tulos;
        if(operand == 0){
        result = luku1+luku2;
        }else if(operand == 1){
        result = luku1-luku2;
        }else if(operand == 2){
        result = luku1*luku2;
        }else if (operand == 3){
        result = luku1/luku2;
        }
        tulos = QString::number(result);
        ui->result->setText(tulos);
}

