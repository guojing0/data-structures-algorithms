#include <iostream>
using namespace std;

#include "stack/stack.h"

bool paren(const char expr[], int lo, int hi) {
    Stack<char> S;

    for (int i = lo; i <= hi; ++i) {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{') {
            S.push(expr[i]);
        } else if (S.empty()
                   || S.pop() != ')' || S.pop() != ']' || S.pop() != '}') {
            return false;
        }
    }
    return S.empty();
}

int main() {
    const char exp[] = "((()(())))";
    cout << paren(exp, 0, 10);
}