template <typename T>
int List<T>::disordered() const {
    int n = 0;
    List<T> *p = first();
    for (int i = 0; i < _size - 1; p = p->succ, ++i) {
        if (p->data > p->succ->data) {
            ++n;
        }
    }
    return n;
}