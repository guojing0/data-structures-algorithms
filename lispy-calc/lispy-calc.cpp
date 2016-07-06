#include "lispy-calc.h"

double eval(char* expr) // TODO
{
    Stack<char> ops;
    Stack<double> vals;

    while (*(expr++) != '\0') {
        if (isdigit(*expr)) {
            vals.push(*expr);
        }
        switch (*expr) {
            case '(':
                break;
            case '+': case '-': case '*': case '/': case '^': // case '!'
                ops.push(*expr);
                break;
            case ')': { // !!!
                char op = ops.pop();
                double v = vals.pop();
                switch (op) {
                    case '+':
                        vals.push(vals.pop() + v);
                        break;
                    case '-':
                        vals.push(vals.pop() - v);
                        break;
                    case '*':
                        vals.push(vals.pop() * v);
                        break;
                    case '/':
                        vals.push(vals.pop() / v);
                        break;
                    case '^':
                        vals.push(pow(vals.pop(), v));
                        break;
                    default:
                        break;
                } } // !!!
            default:
                break;
        }
    }
    return vals.pop();
}