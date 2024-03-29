#include "lispy-calc.h"

void readNum(char*& p, Stack<float>& stk)
{
    stk.push((float) *p - '0');
    while (isdigit(*(++p))) {
        stk.push(stk.pop() * 10 + (*p - '0'));
    }
    if (*p != '.') {
        return;
    }
    float frac = 1;
    while (isdigit(*(++p))) {
        stk.push(stk.pop() + (*p - '0') * (frac /= 10));
    }
}