template<typename T>
void Vector<T>::sort(Rank lo, Rank hi) {
    switch (rand() % 4) {
        case 1:
            bubbleSort(lo, hi); break;
        case 2:
            selectionSort(lo, hi); break;
        case 3:
            mergeSort(lo, hi); break;
        default:
            quickSort(lo, hi); break;
    }
}