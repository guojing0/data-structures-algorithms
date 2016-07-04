#pragma once

#include <cstdlib>
#include "cell.h"

inline Cell* neighbor(Cell* cell) {
    switch (cell->outgoing) {
        case EAST:
            return cell + LABY_MAX;
        case SOUTH:
            return cell + 1;
        case WEST:
            return cell - LABY_MAX;
        case NORTH:
            return cell - 1;
        default:
            exit(-1);
    }
}