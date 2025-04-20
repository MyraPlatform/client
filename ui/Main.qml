import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 800
    height: 600
    title: "Myra Client – Prealpha"

    Column {
        anchors.centerIn: parent

        Text {
            text: "My Amazing Game"
            font.pixelSize: 24
        }

        Button {
            text: "Launch Game"
            onClicked: myraBridge.launch()
        }
    }
}
