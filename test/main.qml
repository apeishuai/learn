import QtQuick 2.15
import QtQuick.Controls 2.15
import MyModule 1.0
import QtQuick.Window 2.15

/*
ApplicationWindow {
    visible: true
    width: 400
    height: 400
    title: "FBO Demo"
}
*/


Window {
    width: 600
    height: 400
    visible: true
    title: "Qt6 FBO绿色背景示例"
    color: "#f0f0f0"  // 窗口背景色

    Column {
        anchors.centerIn: parent
        spacing: 20

        // 绿色FBO区域
        FboItem {
            id: fboBox
            width: 200
            height: 200

            Rectangle {  // 调试边框
                anchors.fill: parent
                color: "transparent"
                border.color: "red"
                border.width: 2
            }
        }

        // 控制面板
        Slider {
            id: sizeSlider
            width: 200
            from: 50
            to: 300
            value: 200
            onValueChanged: fboBox.width = value
        }

        Label {
            text: `FBO尺寸: ${fboBox.width.toFixed(0)}x${fboBox.height.toFixed(0)}`
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
}
