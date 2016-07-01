template <typename T>
struct Increase {
    virtual void operator()(T &e) {
        ++e;
    }
};

template <typename T>
struct Decrease {
    virtual void operator()(T &e) {
        --e;
    }
};

template <typename T>
void increase(Vector<T> &V) {
    V.traverse(Increase<T>());
}

template <typename T>
void decrease(Vector<T> &V){
    V.traverse(Decrease<T>());
}