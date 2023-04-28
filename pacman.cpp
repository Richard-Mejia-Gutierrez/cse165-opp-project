
#include "pacman.h"
#include <iostream>


PacMan::PacMan()
{
    x=0;y=0;
}

PacMan::PacMan(int _x, int _y, std::array<std::array<int,11>, 11>* _map){
    x = _x;
    y = _y;
    map = _map;
    dir = right;
}

void PacMan::revicedKey(QKeyEvent* event)
{
    direction tmp;
    switch((char)event->key())
    {
        case 'W':
        tmp = up;
            std::cout << !isDirectionOccupied(tmp) << std::endl;


            dir = up;

            break;
        case 'A':
            tmp = left;
            std::cout << !isDirectionOccupied(tmp) << std::endl;


            dir = left;

            break;
        case 'S':
            tmp = down;
            std::cout << !isDirectionOccupied(tmp) << std::endl;


            dir = down;

            break;
        case 'D':
            tmp = right;
            std::cout << !isDirectionOccupied(tmp) << std::endl;


            dir = right;

            break;
    }
        std::cout<< dir << std::endl;
}

bool PacMan::isDirectionOccupied(direction dir){

    switch(dir){
case down:
            if((*map)[x+1][y] == 1){
                return 1;
            }
    break;
case right:
    if((*map)[x][y+1] == 1){
                return 1;
    }
    break;
case left:
    if((*map)[x][y-1] == 1){
                return 1;
    }
    break;
case up:
    if((*map)[x-1][y] == 1){
                return 1;
    }
    break;
}
return 0;
}

void PacMan::update(){

std::cout << x << " " << y << " " << dir << std::endl;
std::cout << isDirectionOccupied(up) << " " << isDirectionOccupied(right) << " " << isDirectionOccupied(down) << " "<<isDirectionOccupied(left) << std::endl;
if(!isDirectionOccupied(up)&&dir==up){
    (*map)[x][y] = 0;
    x--;
    (*map)[x][y] = 7;
}
if(!isDirectionOccupied(left)&&dir==left){
    (*map)[x][y] = 0;
    y--;
    (*map)[x][y] = 7;
}
if(!isDirectionOccupied(right)&&dir==right){
    (*map)[x][y] = 0;
    y++;
    (*map)[x][y] = 7;
}
if(!isDirectionOccupied(down)&&dir==down){
    (*map)[x][y] = 0;
    x++;
    (*map)[x][y] = 7;
}
}


