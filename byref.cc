#include <iostream>

void inc(int &i) {
    i += 5;
}

int main() {
    int x = 10;
    inc(x);

    std::cout << x << std::endl;
    std::cout << "-=-=-=-=-=-=-=-=-=-=-" << std::endl;

    int *p = &x;
    inc(*p);
    std::cout << *p << std::endl;
}


