#include "list.h"

template <typename T>
void List<T>::copyNodes(ListNode<T> p, int n) {
    init();
    while (n--) {
        insertAsLast(p->data);
        p = p->succ;
    }
}