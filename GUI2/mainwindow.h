#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //

private slots:

    void on_btnMuuta_clicked();

    void on_btnTallenna_clicked();

    void on_btnOpenForm2_clicked();

private:
    Ui::MainWindow *ui;
    int x = 0;
    QString fname;
    QString lname;

};
#endif // MAINWINDOW_H
