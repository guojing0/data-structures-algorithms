#include <iostream>

#include "vector.h"

using namespace std;

int main()
{
    Vector<int> foo;
    foo.insert(1);
    foo.insert(1);
    foo.insert(6);
    foo.insert(5);
    foo.insert(8);

    foo.deduplicate();
    for (int i = 0; i < foo.size(); ++i) {
        cout << foo[i] << " ";
    }
    cout << endl;
    return 0;
}