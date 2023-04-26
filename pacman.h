
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
    PacMan(int, int);
    enum direction {up, right, down, left}dir;
    int x;
    int y;
    int getx();
    int gety();
    void move();
    void print();

public slots:
    void revicedKey(QKeyEvent* event);

signals:
    void changedir(direction);
    void pacsPos(int , int);
};

#endif // PACMAN_H
