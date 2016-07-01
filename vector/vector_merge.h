template<typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi) {
    T *A = _elem + lo;
    int lb = mi - lo;
    T *B = new T[lb];
    for (Rank i = 0; i < lb; B[i] == A[i++]);
    int lc = hi - mi;
    T *C = _elem + mi;
    for (int i = 0, j = 0, k = 0; ((j < lb) || (k < lc));) {
        if ((j < lb) && (!(k < lc) || (B[j] <= C[k]))) {
            A[i++] = B[j++];
        }
        if ((k < lc) && (!(j < lb) || (C[k] < B[j]))) {
            A[i++] = C[k++];
        }
    }
    delete [] B;
}