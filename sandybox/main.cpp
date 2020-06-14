#include "mainwindow.h"

#include <QApplication>

#include "login.h"
#include "regi.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Login login;
    Regi regi;
    if (login.exec() == QDialog::Accepted) {
        w.show();
        return a.exec();
    }
//    if (regi.exec() == QDialog::Accepted) {
//        w.show();
//        return a.exec();
//    }
    return 0;
}
