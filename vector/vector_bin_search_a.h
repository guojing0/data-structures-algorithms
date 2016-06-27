template <typename T>
static Rank Vector<T>::binSearch(T* A, T const& e, Rank lo, Rank hi) {
    while (lo < hi) {
        Rank mi = (hi - lo) >> 1;

        if (e < A[mi]) {
            hi = mi;
        } else if (e > A[mi]) {
            lo = mi + 1;
        } else {
            return mi;
        }
    }
    return -1;
}