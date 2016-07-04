#pragma once

typedef enum {AVAILABLE, ROUTE, BACKTRACKED, WALL} Status;
typedef enum {UNKNOWN, EAST, WEST, SOUTH, NORTH, NO_WAY} ESWN;

inline ESWN nextESWN(ESWN eswn) {
    return ESWN(eswn + 1);
}

struct Cell {
    int x, y;
    Status status;
    ESWN incoming, outgoing;
};

#define LABY_MAX 24
Cell laby[LABY_MAX][LABY_MAX];