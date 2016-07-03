#include <iostream>

#include "vector/vector.h"
#include "vector/vector_bracket.h"
#include "vector/vector_assignment.h"

using namespace std;

int main()
{
    Vector<int> foo = {2, 4, 5};
    for (int i = 0; i < 6; ++i) {
        cout << foo[i] << endl;
    }
    return 0;
}