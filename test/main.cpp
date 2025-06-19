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
        std::cout << "class Worker created" << std::endl;
    };
    ~Worker(){
        std::cout << "class Worker destoryed" << std::endl;
    };
signals:
    void dowork();
public slots:
    void working(){
        std::cout << "signal dowork emit, start working" << std::endl;
    };
};

class Control: public QObject{
    Q_OBJECT
public:
    Control(QObject *parent = nullptr): QObject(parent){
        std::cout << "class Control created" << std::endl;
        connect(this,&Control::dowork,this,[=](){
                Worker* worker = new Worker(this);
                worker->working();
                });
    };
    ~Control(){
        std::cout << "class Control destoryed" << std::endl;
    };
signals:
    void dowork();
};

int main(int argc, char *argv[])
{
 
    QApplication app(argc, argv);
    
    (void)QtConcurrent::run([]() {
        qDebug() << "Async task running in thread:" << QThread::currentThreadId();
        Control ptr;
        emit ptr.dowork();
        qDebug() << "Async task finished";
    });

    qDebug() << "Main thread continues running (non-blocking)";
    
    return app.exec();
}

#include "main.moc"
