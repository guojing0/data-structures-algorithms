#include "list.h"

template <typename T>
ListNodePosi(T) List<T>::find(T const& e, int n, ListNodePosi(T) p) const {
    while (0 < n--) {
        p = p->pred;
        if (e == p->data) {
            return p;
        }
    }
    return NULL;
}