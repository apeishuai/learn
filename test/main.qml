// main.qml
import QtQuick 2.15
import QtQuick.Window 2.15
import Custom.PaintedItem 1.0

Window {
    width: 400
    height: 300
    visible: true
    title: qsTr("QPainter + QQuickPaintedItem 示例")
    
    PaintedItem {
        id: paintedItem
        anchors.fill: parent
        color: Qt.rgba(Math.random(), Math.random(), Math.random(), 1)
        
        MouseArea {
            anchors.fill: parent
            onClicked: {
                // 点击改变颜色
                paintedItem.color = Qt.rgba(Math.random(), Math.random(), Math.random(), 1)
            }
        }
    }
    
    // 显示FPS
    Text {
        anchors.bottom: parent.bottom
        text: "FPS: " + fpsCounter.fps.toFixed(1)
    }
    
    // FPS计数器
    Item {
        id: fpsCounter
        property int frames: 0
        property real fps: 0
        property date lastTime: new Date()
        
        Timer {
            interval: 1000
            repeat: true
            running: true
            onTriggered: {
                var currentTime = new Date()
                fps = frames * 1000 / (currentTime - lastTime)
                frames = 0
                lastTime = currentTime
            }
        }
        
        Connections {
            target: paintedItem
            function onColorChanged() { frames++ }
        }
    }
}
