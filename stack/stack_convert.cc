#include "stack.h"

void convertIter(Stack<char>& S, __int64_t n, int base) {
    static char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                           'A', 'B', 'C', 'D', 'E', 'F'};
    while (n > 0) {
        int remainder = (int) (n % base);
        S.push(digit[remainder]);
        n /= base;
    }
}

void convertRec(Stack<char>& S, __int64_t n, int base) {
    static char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                           'A', 'B', 'C', 'D', 'E', 'F'};
    if (n > 0) {
        convertRec(S, n / base, base);
        S.push(digit[n % base]);
    }
}

int main()
{
    Stack<char> stack1, stack2;
    convertIter(stack1, 63, 2);
    convertRec(stack2, 63, 2);
    while (!stack1.empty()) {
        cout << stack1.pop() << "";
        cout << endl;
    }
    while (!stack2.empty()) {
        cout << stack2.pop() << "";
        cout << endl;
    }
}