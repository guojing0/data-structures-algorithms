template <typename T>
int List<T>::clear() {
    int oldSize = _size;
    while (_size > 0) {
        remove(header->succ);
    }
    return oldSize;
}