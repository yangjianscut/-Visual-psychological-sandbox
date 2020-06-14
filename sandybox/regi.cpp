#include "regi.h"
#include "ui_regi.h"

Regi::Regi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Regi)
{
    ui->setupUi(this);
}

Regi::~Regi()
{
    delete ui;
}

//void Regi::NewRegi()
//{
//    new Regi();
//}
