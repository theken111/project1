import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    property int xpos
    property int ypos

    Canvas {
        id: myCanvas
        anchors.fill: parent

        onPaint: {
            var ctx = getContext('2d')
            ctx.fillStyle = "Green"
            ctx.fillRect(xpos-1, ypos-1, 3, 3)

        }

        MouseArea{
            anchors.fill: parent
            onPressed: {
                xpos = mouseX
                ypos = mouseY
                myCanvas.requestPaint()
            }
            onMouseXChanged: {
                xpos = mouseX
                ypos = mouseY
                myCanvas.requestPaint()
            }
            onMouseYChanged: {
                xpos = mouseX
                ypos = mouseY
                myCanvas.requestPaint()
            }
        }

    }

}
