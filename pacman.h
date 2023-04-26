
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
    enum direction {up, right, down, left}dir;
    int x;
    int y;
    int getx();
    int gety();
    void move();

public slots:
    void revicedKey(QKeyEvent* event);
signals:
    void changedir(direction);

};

#endif // PACMAN_H
