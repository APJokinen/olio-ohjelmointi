#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug() << "Sovellus käyntiin";
                a.exec();
    return 0;
}
