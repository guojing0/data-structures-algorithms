template <typename T> void Vector<T>::shrink() {
    if (_capacity < DEFAULT_CAPACITY << 1) {
        return;
    }
    if (_capacity < _size << 2) {
        return;
    }
    T* oldElem = _elem;
    _elem = new T[_capacity >> 1];
    for (int i = 0; i < _size; i++) {
        _elem[i] = oldElem[i];
    }
    delete [] oldElem;
}