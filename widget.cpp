#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <string>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->_money = 0;
    ui->pbCoffee->setEnabled(false);
    ui->pbMilk->setEnabled(false);
    ui->pbMango->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pb500_clicked()
{
    changeMoney(500);
}


void Widget::on_pb100_clicked()
{
    changeMoney(100);
}


void Widget::on_pb50_clicked()
{
    changeMoney(50);
}


void Widget::on_pb10_clicked()
{
    changeMoney(10);
}


void Widget::changeMoney(int diff)
{
    _money += diff;
    ui->lcdNumber->display(_money);
    if (_money < 100){
        ui->pbCoffee->setEnabled(false);
        ui->pbMilk->setEnabled(false);
        ui->pbMango->setEnabled(false);
    }
    else if (100 <= _money && _money < 200){
        ui->pbCoffee->setEnabled(true);
        ui->pbMilk->setEnabled(false);
        ui->pbMango->setEnabled(false);
    }
    else if (200 <= _money && _money < 500){
        ui->pbCoffee->setEnabled(true);
        ui->pbMilk->setEnabled(true);
        ui->pbMango->setEnabled(false);
    }
    else if (500 <= _money){
        ui->pbCoffee->setEnabled(true);
        ui->pbMilk->setEnabled(true);
        ui->pbMango->setEnabled(true);
    }
}

void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}


void Widget::on_pbMilk_clicked()
{
    changeMoney(-200);
}


void Widget::on_pbMango_clicked()
{
    changeMoney(-500);
}


void Widget::on_reset_clicked()
{
    changeMoney((-1) * _money);
    ui->pbCoffee->setEnabled(false);
    ui->pbMilk->setEnabled(false);
    ui->pbMango->setEnabled(false);

    int _500 = _money / 500;
    _money -= _500 * 500;

    int _100 = _money / 100;
    _money -= _100 * 100;

    int _50 = _money / 50;
    _money -= _50 * 50;

    int _10 = _money / 10;
    _money -= _10 * 10;
    
    QString fMsg;
    fMsg.asprintf("잔액\n\t500원 %d개\n\t100원 %d개\n\t50원 %d개\n\t10원 %d개", _500, _100, _50, _10);
    QMessageBox msg;
    msg.information(nullptr, "잔액", fMsg);
}

