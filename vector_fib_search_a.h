#include "/fib/fib.h"

template <typename T> const Rank fibSearch(T* A, T const& e, Rank lo, Rank hi) {
    Fib fib(hi - lo);

    while (lo < hi) {
        while (hi - lo < fib.get()) {
            fib.prev();
        }
        Rank mi = lo + fib.get() - 1;

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