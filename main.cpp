#include <iostream>

using namespace std;

template <typename T>
int compare(const T &v1, const T &v2) {
    if (v1 < v2) {
        return -1;
    } else if (v1 > v2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    cout << compare(4, 5) << endl;
    cout << compare(4.5, 3.2) << endl;
    return 0;
}