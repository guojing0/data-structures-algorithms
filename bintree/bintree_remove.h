#pragma once

template <typename T>
static int removeAt(BinNodePosi(T) x) {
    FromParentTo(*x) = NULL;
    if (!x) {
        return 0;
    }
    int n = 1 + removeAt(x->lc) + removeAt(x->rc);
    release(x->data);
    release(x);
    return n;
}

template <typename T>
int BinTree<T>::remove(BinNodePosi(T) x) {
    FromParentTo(*x) = NULL;
    updateHeightAbove(x->parent);
    int n = removeAt(x);
    _size -= n;
    return n;
}