#include <QApplication>
#include <iostream>
#include <QtConcurrent>
#include <QMainWindow>
#include <QDebug>
#include <QLabel>
#include <QTimer>
#include <QThread>
#include <QRandomGenerator>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

class Worker: public QObject{
    Q_OBJECT
public:
    Worker(QObject *parent = nullptr): QObject(parent){
        connect(this,&Worker::dowork,this,&Worker::working);
    }
signals:
    void dowork();
public slots:
    void working(){
        std::cout << "signal dowork emit, start working" << std::endl;
    };
};


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    Worker ptr;
    emit ptr.dowork();
    return app.exec();
}
#include "main.moc"
