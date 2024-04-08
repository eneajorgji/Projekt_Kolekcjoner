#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qqmlcontext.h>

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("helloText", "Hello VS Code");

    engine.load(QUrl(QStringLiteral("qrc:/qt/qml/qtquickapplication1/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
