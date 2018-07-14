// class templates
#include <iostream>

using namespace std;

template<class T>
class mypair {
    T a, b;
public:
    mypair(T first, T second) {
        a = first;
        b = second;
    }

    T getmax();
};

template<class T>
T mypair<T>::getmax() {
    T retval;
    retval = a > b ? a : b;
    return retval;
}

template<class T, class U>
T GetMin(T a, U b) {
    return (a < b ? a : b);
}

int main() {
    mypair<int> myobject(100, 75);
    cout << myobject.getmax() << endl;

    int i, j = 42;
    long l = 1000;
    cout << GetMin<int, long>(j, l) << endl;

    return 0;
}