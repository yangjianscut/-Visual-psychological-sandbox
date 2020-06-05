#include "sandbox.h"
#include "ui_sandbox.h"

Sandbox::Sandbox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sandbox)
{
    ui->setupUi(this);
}

Sandbox::~Sandbox()
{
    delete ui;
}
