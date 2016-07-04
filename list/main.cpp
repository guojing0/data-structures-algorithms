#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List<int> lst;
    lst.insertAsFirst(1);
    lst.insertAsLast(5);
    lst.insertA(lst.first(), 2);
    lst.insertA(lst.first()->succ, 3);
    lst.insertA(lst.last()->pred, 4);
    lst.remove(lst.first()->succ->succ);
    for (auto p = lst.first(); p != lst.last()->succ; p = p->succ) {
        cout << p->data << endl;
    }
    return 0;
}