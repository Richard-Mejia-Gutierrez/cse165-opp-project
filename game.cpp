
#include "game.h"

game::game()
{
    p_pacman = new PacMan(9, 5);
    QObject::connect(p_pacman,&PacMan::pacsPos ,this, &game::getPacPos);

}

void game::print(){
    p_pacman->print();
    for (int i=0;i<ROWS;i++){
        for (int j=0;j<COLS;j++){
            std::cout<< map[i][j] << ' ' ;
        }
        std::cout<<std::endl;
    }
}

void game::getPacPos(int x, int y){
    map[x][y] = 7;
}
