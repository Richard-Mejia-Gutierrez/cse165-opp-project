
#ifndef GAME_H
#define GAME_H

#include "pacman.h"
#include <iostream>

const int ROWS = 11;
const int COLS = 11;

class game: public QObject
{
    Q_OBJECT
public:
    game();
    PacMan* p_pacman;
      int map[ROWS][COLS] = {
        {1,1,1,1,1,1,1,1,1,1,1},
        {1,0,0,0,0,0,0,0,0,0,1},
        {1,0,1,1,1,1,1,1,1,0,1},
        {1,0,1,1,1,1,1,1,1,0,1},
        {1,0,1,1,1,1,1,1,1,0,1},
        {1,0,1,1,1,1,1,1,1,0,1},
        {1,0,1,1,1,1,1,1,1,0,1},
        {1,0,1,1,1,1,1,1,1,0,1},
        {1,0,1,1,1,1,1,1,1,0,1},
        {1,0,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1,1}
    };

    void print();
  public slots:
    void getPacPos(int, int);
};

#endif // GAME_H
