template <typename T>
Rank Vector<T>::insert(Rank r, T const &e) {
    expand();
    for (int i = _size; i > r; i--) {
        _elem[i] = _elem[i-1];
    }
    _elem[r] = e;
    _size = _size + 1;
    return r;
}