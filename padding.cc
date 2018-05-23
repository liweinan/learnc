#include <iostream>

int main() {
    struct foo {
        int x;
        double y;
        char z;
    };

    std::cout << "size of foo: " << sizeof(foo) << std::endl;
    std::cout << "size of x + y + x: " << sizeof(int) + sizeof(double) + sizeof(char) << std::endl;
    std::cout << "size of double * 3: " << sizeof(double) * 3 << std::endl;
}