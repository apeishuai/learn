import QtQuick 2.15
import QtQuick.Controls 2.15
import MyModule 1.0

ApplicationWindow {
    visible: true
    width: 400
    height: 400
    title: "FBO Demo"

    FboItem {
        anchors.fill: parent
    }
}
