#pragma once

template <typename T>
Rank Vector<T>::partition(Rank lo, Rank hi) {
    std::swap(_elem[lo], _elem[lo + rand() % (hi - lo + 1)]);
    T pivot = _elem[lo];
    int mi = lo;

    for (int k = lo + 1; k <= hi; ++k) {
        if (_elem[k] < pivot) {
            std::swap(_elem[++mi], _elem[k]);
        }
    }
    std::swap(_elem[lo], _elem[mi]);
    return mi;
}