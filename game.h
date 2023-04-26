
#ifndef GAME_H
#define GAME_H

#include "pacman.h"

const int ROWS = 11;
const int COLS = 11;

class game
{
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


};

#endif // GAME_H
