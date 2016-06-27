#include "list.h"

template <typename T>
void List<T>::insertionSort(ListNodePosi(T) p, int n) {
    for (int r = 0; r < n; r++) {
        insertA(search(p->data, r, p), p->data);
        p = p->succ;
        remove(p->pred);
    }
}