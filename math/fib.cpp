#include "math.h"

int fib(int n)
{
    int f = 1, g = 0;

    while (n-- > 0) {
        g = g + f;
        f = g - f;
    }
    return g;
}