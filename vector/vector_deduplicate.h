template <typename T> int Vector<T>::deduplicate() {
    int oldSize = _size;
    Rank i = 1;

    while (i < _size) {
        if (find(_elem[i], 0, i) < 0) {
            i = i + 1;
        } else {
            remove(i);
        }
    }
    return oldSize - _size;
}