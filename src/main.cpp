#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "launcher.h"
#include "library.h"

class MyraBridge : public QObject {
    Q_OBJECT
public slots:
    void launch() {
        auto game = Library::loadGame("assets/example-game/Software.conf");
        Launcher::launchGame(game);
    }
};

int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    MyraBridge myraBridge;

    engine.rootContext()->setContextProperty("myraBridge", &myraBridge);
    engine.load(QUrl(QStringLiteral("qrc:/ui/Main.qml")));

    return app.exec();
}
