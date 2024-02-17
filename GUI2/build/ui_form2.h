/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QLabel *label;
    QLabel *labelFname;
    QLabel *labelLname;

    void setupUi(QDialog *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName("Form2");
        Form2->resize(400, 300);
        label = new QLabel(Form2);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 50, 101, 71));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        labelFname = new QLabel(Form2);
        labelFname->setObjectName("labelFname");
        labelFname->setGeometry(QRect(80, 160, 151, 61));
        labelLname = new QLabel(Form2);
        labelLname->setObjectName("labelLname");
        labelLname->setGeometry(QRect(80, 200, 151, 61));

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QDialog *Form2)
    {
        Form2->setWindowTitle(QCoreApplication::translate("Form2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Form2", "Toinen ikkuna", nullptr));
        labelFname->setText(QCoreApplication::translate("Form2", "TextLabel", nullptr));
        labelLname->setText(QCoreApplication::translate("Form2", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
