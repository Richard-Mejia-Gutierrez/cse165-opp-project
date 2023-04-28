
#ifndef PACMAN_H
#define PACMAN_H

#include <QKeyEvent>
#include <QDebug>
#include <QEvent>
#include <QWidget>


class PacMan : public QObject
{
    Q_OBJECT
public:
    PacMan();
    PacMan(int, int,std::array<std::array<int,11>, 11>*);
    enum direction {up, right, down, left}dir;
    int x;
    int y;
    std::array<std::array<int,11>, 11>* map;
    void move(int**);
    void update();
    void print();
    bool isDirectionOccupied(direction);
    void setDir();
    void setPosition();

public slots:
    void revicedKey(QKeyEvent* event);
};

#endif
