#ifndef WINDOWS_H
#define WINDOWS_H
#include "mainwindow.h"
#include "login.h"
#include <QSqlDriver>
#include <QSqlDatabase>
#include <QSqlError>

extern QSqlDatabase db;
extern MainWindow *w;
extern login *l;
#endif // WINDOWS_H
