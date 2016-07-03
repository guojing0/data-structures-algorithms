template <typename T>
void List<T>::mergeSort(ListNodePosi(T) &p, int n) {
    if (n < 2) {
        return;
    }
    int m = n >> 1;
    ListNodePosi(T) q = p;
    for (int i = 0; i < m; ++i) {
        q = q->succ;
    }
    mergeSort(p, m);
    mergeSort(q, n - m);
    merge(p, m, *this, q, n - m);
}

template <typename T>
void List<T>::merge(ListNodePosi(T) &p, int n, List<T> &L, ListNodePosi(T) q, int m) {
    ListNodePosi(T) pp = p->pred;
    while (m > 0) {
        if ((n > 0) && (p->data <= q->data)) {
            if (q == (p = p->succ)) {
                --n;
                break;
            }
        } else {
            insertB(p, L.remove((q = q->succ)->pred));
            --m;
        }
    }
    p = pp->succ;
}