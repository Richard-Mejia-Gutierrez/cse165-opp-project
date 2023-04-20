
#ifndef PACMAN_H
#define PACMAN_H

#include "PacMan_global.h"
#include <QKeyEvent>
#include <QDebug>
#include <QEvent>
#include <QWidget>


class PACMAN_EXPORT PacMan: public QWidget
{
public:
    PacMan();

public slots:
    void reciveKey();

private:
    void keyPressEvent(QKeyEvent *event) override;


};


#endif // PACMAN_H
