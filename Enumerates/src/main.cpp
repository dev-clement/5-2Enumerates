#include <QQuickStyle>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "errorlevel.hpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterUncreatableType<ErrorLevel>("enumerates.errorlevel", 1, 0, "ErrorLevel"
                                           , "Can not create ErrorLevel type in QML. Not allowed !");

    QQuickStyle::setStyle("Material");
    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Enumerates", "Main");

    return app.exec();
}
