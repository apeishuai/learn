#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QThread>
#include <iostream>

class Workthread: public QThread{
    Q_OBJECT
public:
    explicit Workthread(QObject *parent = nullptr): QThread(parent){}
protected:
    void run() override{
        for(int i = 0; i < 10; i++){
            std::cout << "aaa" << std::endl;
        }
    }
};

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    Workthread w;
    w.start();

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();
}

#include "main.moc"
