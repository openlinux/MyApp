import QtQuick 1.0

Rectangle {
    width: 360
    height: 360
    Text {
        anchors.centerIn: parent
        text: "Hello World"
    }
    MouseArea {
        id: mousearea1
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }
    states: [
        State {
            name: "状态1"

            PropertyChanges {
                target: mousearea1
                x: 11
                y: -108
                anchors.topMargin: -108
                anchors.rightMargin: -11
                anchors.bottomMargin: 108
                anchors.leftMargin: 11
            }
        }
    ]
}
