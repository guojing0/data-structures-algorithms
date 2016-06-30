#include "queen_stack.h"

void playQueens(int N) {
    Stack<Queen> solu;
    Queen q(0, 0);

    do {
        if (N <= solu.size() || N <= q.y) {
            q = solu.pop();
            ++q.y;
        } else {
            while ((N > q.y) && (solu.find(q) >= 0)) {
                ++q.y;
                ++nCheck;
            }
            if (N > q.y) {
                solu.push(q);
                if (N <= solu.size()) {
                    ++nSolu;
                }
                ++q.x;
                q.y = 0;
            }
        }
    }
    while ((q.x > 0) || (N > q.y));
}