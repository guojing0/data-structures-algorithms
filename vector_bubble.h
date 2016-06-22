template <typename T> bool Vector<T>::bubble(Rank lo, Rank hi) {
    bool sorted = true;

    while (++lo < hi) {
        if (_item[lo - 1] > _item[lo]) {
            sorted = false;
            swap(_item[lo - 1], _item[lo]);
        }
    }
    return sorted;
}