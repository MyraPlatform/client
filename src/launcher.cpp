#include "launcher.h"
#include <QProcess>
#include <QDebug>

void Launcher::launchGame(const GameInfo &game) {
    QProcess *process = new QProcess();
    process->start(game.exec, game.args.split(" "));
    if (!process->waitForStarted()) {
        qWarning() << "Failed to launch:" << game.exec;
    }
}
