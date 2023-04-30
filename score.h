
#ifndef SCORE_H
#define SCORE_H


#include "points.h"
#include <array>
#include <vector>

class score
{
public:
    int total;

    points* pointptr;
    std::array<std::array<int,11>, 11>* map;
    score(std::array<std::array<int,11>, 11>* _map);
    void setBoard();
};

#endif // SCORE_H
