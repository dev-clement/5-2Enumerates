import QtQuick
import enumerates.errorlevel

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Enumerates")

    Component.onCompleted: function() {
        console.log(ErrorLevel.MESSAGE)
        console.log(ErrorLevel.DEBUG)
        console.log(ErrorLevel.WARNING)
        console.log(ErrorLevel.INFORMATION)
    }
}
