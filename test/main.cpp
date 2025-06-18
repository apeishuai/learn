#include <QApplication>
#include <QtConcurrent>
#include <QMainWindow>
#include <QDebug>
#include <QLabel>
#include <QTimer>
#include <QRandomGenerator>
#include <QGuiApplication>
#include <QQmlApplicationEngine>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
