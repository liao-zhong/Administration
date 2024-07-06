#include "login.h"
#include "ui_login.h"
#include "windows.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_pushButton_clicked()
{
    // QStringList str=QSqlDatabase::drivers();
    // foreach (QString dir, str) {
    //     qDebug()<<dir;
    // }

    // if(!db.open())
    // {
    //     qDebug()<<"连接失败";
    //     db.close();
    //     return;
    // }

    if(ui->textEdit->toPlainText()=="admin"){
        w = new MainWindow();
        w->show();
        l->close();
    }
    db.close();
}

