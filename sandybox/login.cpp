#include "login.h"
#include "ui_login.h"
#include "regi.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_regiButton_clicked()
{
    Regi *regi = new Regi();
    regi->setModal(true);
    regi->show();
}
