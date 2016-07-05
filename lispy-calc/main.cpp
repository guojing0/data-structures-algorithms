#include <iostream>

#include "lispy-calc.h"

using namespace std;

int main()
{
    Stack<char> op;
    Stack<int> val;
    val.push(1);
    val.push(2);
    op.push('+');

    cout << op.pop() << endl;

    int v = val.pop();
    char o = op.pop();
    switch (o) {
        case '+':
            cout << val.pop() + v << endl;
            break;
        default:
            break;
    }

    char c[] = "(+ 1 2)";
    cout << eval(c) << endl;

    return 0;
}