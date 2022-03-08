//
// Created by genab on 03.03.2022.
//

#ifndef CALC_CALCULATORMAINWINDOW_H
#define CALC_CALCULATORMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class CalculatorMainWindow : public QMainWindow{
    Q_OBJECT

public:
    QLineEdit *resultLine= nullptr;
    QLineEdit *numberLine1= nullptr;
    QLineEdit *numberLine2= nullptr;

    CalculatorMainWindow(QWidget *parent = nullptr): QMainWindow(parent){}

    enum Operation{
        ADD,
        SUB,
        MULTIPLY,
        DIV
    };

    void getResult(Operation o){
        bool isNumber;
        double a = numberLine1->text().toDouble(&isNumber);
        double b = numberLine2->text().toDouble(&isNumber);
        QString s;
        if (isNumber){
            if (o==ADD) s.setNum(a+b);
            else if (o==SUB) s.setNum(a-b);
            else if (o==MULTIPLY) s.setNum(a*b);
            else if (o==DIV) s.setNum(a/b);
        }
        else s="ERROR";
        resultLine->setText(s);
    }

public slots:
    void addition(){
        getResult(ADD);
    };
    void subtraction(){
        getResult(SUB);
    };
    void multiplication(){
        getResult(MULTIPLY);
    };
    void division(){
        getResult(DIV);
    };
};

#endif //CALC_CALCULATORMAINWINDOW_H
