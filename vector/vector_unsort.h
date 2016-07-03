template <typename T> void Vector<T>::unsort(Rank lo, Rank hi) {
    T *V = _elem + lo;
    for (int i = hi - lo; i > 0; i--) {
        std::swap(V[i - 1], V[rand() % i]);
    }
}