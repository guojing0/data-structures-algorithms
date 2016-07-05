#include <iostream>
#include "stack.h"

using namespace std;

bool paren(const char expr[], int lo, int hi)
{
    Stack<char> S;

    for (int i = lo; i <= hi; ++i) {
        switch (expr[i]) {
            case '(': case '[': case '{':
                S.push(expr[i]);
                break;
            case ')':
                if ((S.empty()) || (S.pop() != '(')) {
                    return false;
                }
                break;
            case ']':
                if ((S.empty()) || (S.pop() != '[')) {
                    return false;
                }
                break;
            case '}':
                if ((S.empty()) || (S.pop() != '{')) {
                    return false;
                }
                break;
            default:
                break;
        }
    }
    return S.empty();
}

int main()
{
    const char foo[] = "())";
    cout << paren(foo, 0, (int) (strlen(foo) - 1)) << endl;
    return 0;
}