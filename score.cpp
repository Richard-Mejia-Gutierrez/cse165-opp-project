
#include "score.h"

score::score(std::array<std::array<int,11>, 11>* _map)
{
    total = 0;
    map = _map;
}

void score::setBoard(){
    std::vector<points*>tmp;
    for(int i=0;i<11; i++){
        for (int j=0;j<11; j++){
            switch((*map)[i][j]){
            case 2:
                tmp.push_back(new basic());
                break;
            case 3:
                tmp.push_back(new largePoint());
                break;
            case 4:
                tmp.push_back(new collectable());
                break;
            }
        }
    }
}
