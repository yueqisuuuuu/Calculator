#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}
QString str="";

void Calculator::on_plus_pushButton_clicked()
{
    std::string x = ((ui->a_lineEdit->text()).toStdString());
    std::string y = ((ui->b_lineEdit->text()).toStdString());
    biguint a(x);
    biguint b(y);
    a+=b;
    std::string ca=a.toStdString();
    QString qstr = QString::fromStdString(ca);
    ui->r_lineEdit->setText(qstr);
}

void Calculator::on_minus_pushButton_clicked()
{
    std::string x = ((ui->a_lineEdit->text()).toStdString());
    std::string y = ((ui->b_lineEdit->text()).toStdString());
    biguint a(x);
    biguint b(y);
    a-=b;
    std::string ca=a.toStdString();
    QString qstr = QString::fromStdString(ca);
    ui->r_lineEdit->setText(qstr);
}

void Calculator::on_store_pushButton_clicked()
{
    str = ui->r_lineEdit->text();
}


void Calculator::on_recall_pushButton_clicked()
{
    ui->a_lineEdit->setText(str);
}
