/********************************************************************************
** Form generated from reading UI file 'regi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGI_H
#define UI_REGI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Regi
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Regi)
    {
        if (Regi->objectName().isEmpty())
            Regi->setObjectName(QStringLiteral("Regi"));
        Regi->resize(400, 300);
        pushButton = new QPushButton(Regi);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 230, 75, 23));

        retranslateUi(Regi);
        QObject::connect(pushButton, SIGNAL(clicked()), Regi, SLOT(accept()));

        QMetaObject::connectSlotsByName(Regi);
    } // setupUi

    void retranslateUi(QDialog *Regi)
    {
        Regi->setWindowTitle(QApplication::translate("Regi", " Register", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Regi", "\345\256\214\346\210\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Regi: public Ui_Regi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGI_H
