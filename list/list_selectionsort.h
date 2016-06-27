#include "list.h"

template <typename T>
void List<T>::selectionSort(ListNodePosi(T) p, int n) {
    ListNodePosi(T) head = p->head;
    ListNodePosi(T) tail = p;

    for (int i = 0; i < n; ++i) {
        tail = tail->succ;
    }
    while (n > 1) {
        ListNodePosi(T) max = selectMax(head->succ, n);
        insertB(tail, remove(max));
        tail = tail->pred;
        --n;
    }
}

template <typename T>
ListNodePosi(T) List<T>::selectMax(ListNodePosi(T) p, int n) {
    ListNodePosi(T) max = p;
    for (ListNodePosi(T) cur = p; n > 1; n--) {
        if (!lt((cur = cur->succ)->data, max->data)) {
            max = cur;
        }
    }
    return max;
}