#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "biguint.h"
#include <QWidget>

namespace Ui {
class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void on_plus_pushButton_clicked();

    void on_minus_pushButton_clicked();

    void on_store_pushButton_clicked();

    void on_recall_pushButton_clicked();

private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
