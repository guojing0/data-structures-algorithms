template <typename T>
static Rank Vector<T>::binSearch(T* A, T const& e, Rank lo, Rank hi) {
    while (hi - lo > 1) {
        Rank mi = (hi + lo) >> 1;

        if (e < A[mi]) {
            hi = mi;
        } else {
            lo = mi + 1;
        }
    }

    if (e == A[lo]) {
        return lo;
    } else {
        return -1;
    }
}