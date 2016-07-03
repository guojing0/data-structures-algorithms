template <typename T> List<T>::~list() {
    clear();
    delete header;
    delete trailer;
}