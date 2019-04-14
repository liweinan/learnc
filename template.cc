#include <iostream>

template<class T>
T getMax(T a, T b) {
    return (a > b ? a : b);
}

int main() {
    int x = 3, y = 10;

    std::cout << getMax<int>(x, y) << std::endl;
}