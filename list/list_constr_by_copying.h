#include "list_copynodes.h"

template <typename T>
List<T>::List(ListNodePosi(T) p, int n) {
    copyNodes(p, n);
}

template <typename T>
List<T>::List(List<T> const& L) {
    copyNodes(L.first(), L._size);
}

template <typename T>
List<T>::List(List<T> const& L, int r, int n) {
    copyNodes(L[r], n);
}