#include <QApplication>
#include <QPushButton>
#include "./ui_calculator.h"
#include "calculatorMainWindow.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalculatorMainWindow window (nullptr);
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.resultLine=calculator.resultLine;
    window.numberLine1=calculator.numberLine1;
    window.numberLine2=calculator.numberLine2;
    window.show();
    return QApplication::exec();
}
