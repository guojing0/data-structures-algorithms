#pragma once

#include "fib.h"

int fac(int n)
{
    int f = 1;
    while (n > 1) {
        f *= n--;
    }
    return f;
}

int fib(int n)
{
    int f = 1, g = 0;

    while (n-- > 0) {
        g = g + f;
        f = g - f;
    }
    return g;
}