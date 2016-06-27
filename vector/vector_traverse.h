template <typename T, typename VST>
void Vector<T>::traverse(VST& visit) {
    for (int i = 0; i < _size; ++i) {
        visit(_elem[i]);
    }
}