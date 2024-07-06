#include "mainwindow.h"
#include "login.h"
#include <QIcon>
#include <QApplication>
#include "windows.h"

QSqlDatabase db;
MainWindow *w;
login *l;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    l=new login();
    l->show();
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setDatabaseName("Administration");
    db.setUserName("admin");
    db.setPassword("admin");
    return a.exec();
}
