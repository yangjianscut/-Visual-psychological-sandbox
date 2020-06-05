#ifndef SANDBOX_H
#define SANDBOX_H

#include <QWidget>

namespace Ui {
class Sandbox;
}

class Sandbox : public QWidget
{
    Q_OBJECT

public:
    explicit Sandbox(QWidget *parent = nullptr);
    ~Sandbox();

private:
    Ui::Sandbox *ui;
};

#endif // SANDBOX_H
