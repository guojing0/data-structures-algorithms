#include <iostream>

#include "stack/stack.h"

using namespace std;

int main()
{
    Stack<char> op;
    Stack<int> val;
    val.push(1);
    val.push(2);
    op.push('+');

    int v = val.pop();
    char o = op.pop();
    switch (o) {
        case '+':
            cout << val.pop() + v << endl;
            break;
        default:
            break;
    }

    return 0;
}