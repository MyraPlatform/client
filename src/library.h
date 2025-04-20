// library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <QString>

struct GameInfo {
    QString name;
    QString exec;
    QString args;
};

class Library {
public:
    static GameInfo loadGame(const QString &confPath);
};

#endif
