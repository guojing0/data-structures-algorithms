template <typename t>
void Vector<T>::quickSort(Rank lo, Rank hi) {
    if (hi - lo < 2) {
        return;
    }
    Rank mi = partition(lo, hi - 1);
    quickSort(lo, mi);
    quickSort(mi + 1, hi);
}