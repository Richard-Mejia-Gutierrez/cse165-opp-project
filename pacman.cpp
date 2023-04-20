
#include "pacman.h"


PacMan::PacMan()
{
}

//void PacMan::reciveKey(){
//    qDebug() << "Pressed key: " << (char) ();
//}

void PacMan::keyPressEvent(QKeyEvent *event)
{
    if((char)event->key() == 'W' || (char)event->key() == 'A' || (char)event->key() == 'S' || (char)event->key() == 'D')
        qDebug() << "Pressed key: " << (char) event->key();
}
