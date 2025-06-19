#include "mainwindow.h"
#include "qcustomplot.h"
#include <QApplication>
#include <QVector>


int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    MainWindow w;
    w.resize(800,800);

    QVector<double> x(101), y(101);
    for (int i=0; i<101; ++i)
    {
        x[i] = i/50.0 - 1; 
        y[i] = x[i]*x[i];
    }
    QCustomPlot *customPlot = new QCustomPlot();
    customPlot->setParent(&w);
    customPlot->addGraph();
    customPlot->graph(0)->setData(x, y);
    customPlot->xAxis->setLabel("x");
    customPlot->yAxis->setLabel("y");
    customPlot->xAxis->setRange(-1, 1);
    customPlot->yAxis->setRange(0, 1);
    customPlot->replot();

    w.show();

    return app.exec();
}
