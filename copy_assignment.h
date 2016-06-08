template <typename T>
Vector<T>& Vector<T>::operator= (Vector<T> const& T) {
    if (_elem) {
        delete [] _elem;
    }
    copyFrom(V._elem, 0, V.size);
    return *this;
}