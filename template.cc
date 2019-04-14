#include <iostream>

// http://www.cplusplus.com/doc/oldtutorial/templates/
template<class T>
T getMax(T a, T b) {
    return (a > b ? a : b);
}

template<class U>
class Pair {
    U x;
    U y;
public:
    U getX() const {
        return x;
    }

    U getY() const {
        return y;
    }

    Pair(U x, U y) {
        this->x = x;
        this->y = y;
        std::cout << this->x << ", " << this->y << std::endl;
    }
};


int main() {
    int x = 3, y = 10;

    std::cout << getMax<int>(x, y) << std::endl;

    Pair<int> dot(2, 3);
}