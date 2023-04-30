
#include "points.h"
#include <iostream>

basic::basic(){
    cost =100;
}
void basic::effect(){

}

largePoint::largePoint(){
    cost = 500;
    time = 1000;
}

void largePoint::effect(){
    std::cout << "Time: " << time/100 << std::endl;
    time--;
}
collectable::collectable(){
    cost = 500;
    collectables = 0;
}
void collectable::effect(){
    std::cout << "Collectables: ";
    for (int i=0;i<collectables;i++){
        std::cout << "|";
    }
}

