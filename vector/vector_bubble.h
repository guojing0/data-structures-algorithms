template <typename T>
bool Vector<T>::bubble(Rank lo, Rank hi) {
    bool sorted = true;

    while (++lo < hi) {
        if (_elem[lo - 1] > _elem[lo]) {
            sorted = false;
            swap(_elem[lo - 1], _elem[lo]);
        }
    }
    return sorted;
}