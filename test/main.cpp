#include <QApplication>
#include <QtConcurrent>
#include <QMainWindow>
#include <QDebug>
#include <QLabel>
#include <QTimer>
#include <QRandomGenerator>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "painteditem.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<PaintedItem>("Custom.PaintedItem", 1, 0, "PaintedItem");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
