#pragma once

#include <cstdlib>
#include "cell.h"

inline Cell* advance(Cell *cell) {
    Cell *next;
    switch (cell->outgoing) {
        case EAST:
            next = cell + LABY_MAX;
            next->incoming = WEST;
            break;
        case SOUTH:
            next = cell + 1;
            next->incoming = NORTH;
            break;
        case WEST:
            next = cell - LABY_MAX;
            next->incoming = EAST;
            break;
        case NORTH:
            next = cell - 1;
            next->incoming = SOUTH;
            break;
        default:
            exit(-1);
    }
    return next;
}