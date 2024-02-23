#ifndef FORM2_H
#define FORM2_H

#include <QDialog>

namespace Ui {
class form2;
}

class form2 : public QDialog
{
    Q_OBJECT

public:
    explicit form2(QWidget *parent = nullptr);
    ~form2();

    void setNameFromMainwindow(const QString &newNameFromMainwindow);

    QString getLname() const;
    void setLname(const QString &newLname);

private slots:
    void on_btnSave_clicked();

private:
    Ui::form2 *ui;
    QString nameFromMainwindow;
    QString lname;

signals:
    void lnameIsSet();
};

#endif // FORM2_H
