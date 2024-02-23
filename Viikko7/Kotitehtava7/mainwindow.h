#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTimer"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void timeout();
private slots:

    void on_btnAika1_clicked();

    void on_btnAika2_clicked();

    void on_btnStartGame_clicked();


    void on_btnSwitch1_clicked();

    void on_btnSwitch2_clicked();

    void on_btnStopGame_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer * pQtimer1;
    QTimer * pQtimer2;
    void updateProgressBar();
    void setGameInfoText(QString, short);

};
#endif // MAINWINDOW_H
