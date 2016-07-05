#include <iostream>

#include "math/math.h"

using namespace std;

int main()
{
    for (int i = 0; i < 10; ++i) {
        cout << fib(i) << " " << fac(i) << endl;
    }
    return 0;
}