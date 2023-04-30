#include "game.h"
game::game()
{
    p_pacman = new PacMan(9, 5, &map);
    p_score = new score(&map);
}

void game::print(){
    for (int i=0;i<ROWS;i++){
        for (int j=0;j<COLS;j++){
            std::cout<< map[i][j] << ' ' ;
        }
        std::cout<<std::endl;
    }
    p_pacman->update();
}
