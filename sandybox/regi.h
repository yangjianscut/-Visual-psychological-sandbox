#ifndef REGI_H
#define REGI_H

#include <QDialog>

namespace Ui {
class Regi;
}

class Regi : public QDialog
{
    Q_OBJECT

public:
    explicit Regi(QWidget *parent = nullptr);
    ~Regi();

private:
    Ui::Regi *ui;

//public slots:
//    void NewRegi();
};

#endif // REGI_H
