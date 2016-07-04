#include "queen_stack.h"

int nSolu = 0;
int nCheck = 0;

int main() {
    placeQueens(10);
    cout << nSolu << " " << nCheck << endl;
    return 0;
}