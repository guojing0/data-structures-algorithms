#include <iostream>

#include "lispy-calc.h"

using namespace std;

int main()
{
    char c[] = "(+ 1 1)";
    cout << eval(c) << endl;

    return 0;
}