#include "library.h"
#include <QSettings>

GameInfo Library::loadGame(const QString &confPath) {
    QSettings settings(confPath, QSettings::IniFormat);
    GameInfo game;
    game.name = settings.value("Myra/Name").toString();
    game.exec = settings.value("Launch/Executable").toString();
    game.args = settings.value("Launch/Arguments").toString();
    return game;
}
// This is a prototype. This will actually interact with an api later.
