#include <iostream>

#include "vector.h"

using namespace std;

int main()
{
    Vector<int> foo;
    foo.insert(3);
    foo.insert(5);
    foo.insert(6);
    foo.insert(7);

    cout << foo[2] << endl;
    return 0;
}