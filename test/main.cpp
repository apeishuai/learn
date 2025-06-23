#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickStyle>
#include <iostream>
#include "fbo.h"
#include <QLoggingCategory>


int main(int argc, char *argv[]) {
    qputenv("QSG_RHI_BACKEND", "opengl");

    //QLoggingCategory::setFilterRules("*.debug=true\nqt.*.debug=true");
    //#ifdef Q_OS_WIN
    //qSetMessagePattern("[%{time yyyyMMdd h:mm:ss.zzz}] %{message}");
    //#endif
    
    QGuiApplication app(argc, argv);

    qmlRegisterType<FboItem>("MyModule", 1, 0, "FboItem");
    
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();
}

#include "main.moc"
