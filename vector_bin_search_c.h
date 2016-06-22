template <typename T>
static Rank Vector<T>::binSearch(T* A, T const& e, Rank lo, Rank hi) {
    while (lo < hi) {
        Rank mi = (lo + hi) >> 1;

        if (e < A[mi]) {
            hi = mi;
        } else {
            lo = mi + 1;
        }
    }
    return --lo;
}