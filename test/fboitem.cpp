#include "fboitem.h"
#include <QQmlEngine>

void registerTypes() {
    qmlRegisterType<FboItem>("MyModule", 1, 0, "FboItem");
}
