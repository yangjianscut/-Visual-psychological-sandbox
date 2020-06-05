#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sandbox.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->register_2, SIGNAL(clilked()),this,SLOT(regi()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::regi(){
    Sandbox *sbox = new Sandbox;
    sbox->show();
}
