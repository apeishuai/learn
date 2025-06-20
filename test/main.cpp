#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "fboitem.h"

void registerTypes();

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);
    registerTypes();
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();
}
