#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQtimer1 = new QTimer();
    pQtimer2 = new QTimer();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQtimer1;
    pQtimer1 = nullptr;

    delete pQtimer2;
    pQtimer2 = nullptr;
}

void MainWindow::timeout()
{
    if(currentPlayer == 1){
        player1Time -= 1;
        qDebug() << "Player 1 time: " << player1Time << Qt::endl;;
        if(player1Time == 0){
            setGameInfoText("Player 2 won!!", 12);
            pQtimer1->stop();


        }
    }else{
        player2Time -= 1;
        qDebug() << "Player 2 time: " << player2Time << Qt::endl;;
        if(player2Time == 0){
            setGameInfoText("Player 1 won!!", 12);
            pQtimer2->stop();
        }
    }

    updateProgressBar();

}





void MainWindow::on_btnAika1_clicked()
{
    gameTime = 120;
    setGameInfoText("ready to play", 11);

    player1Time=gameTime;
    player2Time=gameTime;

    updateProgressBar();
}


void MainWindow::on_btnAika2_clicked()
{
    gameTime = 5*60;
    setGameInfoText("ready to play", 11);


    player1Time=gameTime;
    player2Time=gameTime;

    updateProgressBar();
}


void MainWindow::on_btnStartGame_clicked()
{
    currentPlayer=1;
    connect(pQtimer1, SIGNAL(timeout()), this, SLOT(timeout()));
    connect(pQtimer2, SIGNAL(timeout()), this, SLOT(timeout()));
    pQtimer1->start(1000);

}

void MainWindow::updateProgressBar()
{
    ui->progressPl1->setValue(100*player1Time/gameTime);
    ui->progressPl2->setValue(100*player2Time/gameTime);
}

void MainWindow::setGameInfoText(QString teksti, short fontti)
{
    QFont f( "Arial", fontti, QFont::Bold);
    ui->labelTeksti->setFont(f);
    ui->labelTeksti->setText(teksti);
}




void MainWindow::on_btnSwitch1_clicked()
{
    qDebug("Switch 1 " + player1Time);
    pQtimer1->stop();
    currentPlayer = 2;
    pQtimer2->start(1000);


}


void MainWindow::on_btnSwitch2_clicked()
{
    qDebug("Switch 2: " + player2Time);
    pQtimer2->stop();
    currentPlayer = 1;
    pQtimer1->start(1000);
}


void MainWindow::on_btnStopGame_clicked()
{

    if(currentPlayer = 1){
        pQtimer1->stop();
    }else{
        pQtimer2->stop();
    }
    player1Time = 0;
    player2Time = 0;
    setGameInfoText("New game via start button", 9);

    if(gameTime != 0){
        updateProgressBar();}
    gameTime=0;
}

