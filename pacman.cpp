
#include "pacman.h"


PacMan::PacMan()
{
    x=0;y=0;
}


void PacMan::revicedKey(QKeyEvent* event)
{
    switch((char)event->key())
    {
        case 'W':
            dir = up;
            break;
        case 'A':
            dir = left;
            break;
        case 'S':
            dir = down;
            break;
        case 'D':
            dir = right;
            break;
    }
        qDebug() << dir;
    emit changedir(dir);
}

int PacMan::getx(){
    return x;
}
int PacMan::gety(){
    return y;
}

//int PacMan::move(){

//}
