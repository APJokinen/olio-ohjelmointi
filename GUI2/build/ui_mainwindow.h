/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnMuuta;
    QLabel *labelMuuttuu;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnTallenna;
    QLabel *labelNimi;
    QLineEdit *kenttaEtunimi;
    QLineEdit *kenttaSukunimi;
    QPushButton *btnOpenForm2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnMuuta = new QPushButton(centralwidget);
        btnMuuta->setObjectName("btnMuuta");
        btnMuuta->setGeometry(QRect(60, 60, 80, 24));
        labelMuuttuu = new QLabel(centralwidget);
        labelMuuttuu->setObjectName("labelMuuttuu");
        labelMuuttuu->setGeometry(QRect(50, 120, 49, 16));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 120, 61, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 160, 61, 21));
        btnTallenna = new QPushButton(centralwidget);
        btnTallenna->setObjectName("btnTallenna");
        btnTallenna->setGeometry(QRect(230, 200, 80, 24));
        labelNimi = new QLabel(centralwidget);
        labelNimi->setObjectName("labelNimi");
        labelNimi->setGeometry(QRect(130, 250, 251, 16));
        kenttaEtunimi = new QLineEdit(centralwidget);
        kenttaEtunimi->setObjectName("kenttaEtunimi");
        kenttaEtunimi->setGeometry(QRect(230, 120, 113, 24));
        kenttaSukunimi = new QLineEdit(centralwidget);
        kenttaSukunimi->setObjectName("kenttaSukunimi");
        kenttaSukunimi->setGeometry(QRect(230, 160, 113, 24));
        btnOpenForm2 = new QPushButton(centralwidget);
        btnOpenForm2->setObjectName("btnOpenForm2");
        btnOpenForm2->setGeometry(QRect(230, 250, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnMuuta->setText(QCoreApplication::translate("MainWindow", "Testaa", nullptr));
        labelMuuttuu->setText(QCoreApplication::translate("MainWindow", "\"\"", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Etunimi", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sukunimi", nullptr));
        btnTallenna->setText(QCoreApplication::translate("MainWindow", "Talenna", nullptr));
        labelNimi->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btnOpenForm2->setText(QCoreApplication::translate("MainWindow", "Avaa form2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
