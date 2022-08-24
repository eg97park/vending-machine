/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pb500;
    QPushButton *pb100;
    QPushButton *pb50;
    QPushButton *pb10;
    QPushButton *pbCoffee;
    QPushButton *pbMilk;
    QPushButton *pbMango;
    QPushButton *reset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 607);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(0, 0, 801, 321));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName(QString::fromUtf8("pb500"));
        pb500->setGeometry(QRect(20, 330, 251, 61));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setGeometry(QRect(20, 400, 251, 61));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setGeometry(QRect(20, 470, 251, 61));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName(QString::fromUtf8("pb10"));
        pb10->setGeometry(QRect(20, 540, 251, 61));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName(QString::fromUtf8("pbCoffee"));
        pbCoffee->setGeometry(QRect(280, 330, 251, 61));
        pbMilk = new QPushButton(Widget);
        pbMilk->setObjectName(QString::fromUtf8("pbMilk"));
        pbMilk->setGeometry(QRect(280, 400, 251, 61));
        pbMango = new QPushButton(Widget);
        pbMango->setObjectName(QString::fromUtf8("pbMango"));
        pbMango->setGeometry(QRect(280, 470, 251, 61));
        reset = new QPushButton(Widget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(280, 540, 251, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500\354\233\220", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100\354\233\220", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50\354\233\220", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10\354\233\220", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "\354\273\244\355\224\274", nullptr));
        pbMilk->setText(QCoreApplication::translate("Widget", "\354\232\260\354\234\240", nullptr));
        pbMango->setText(QCoreApplication::translate("Widget", "\353\247\235\352\263\240", nullptr));
        reset->setText(QCoreApplication::translate("Widget", "\353\246\254\354\205\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
