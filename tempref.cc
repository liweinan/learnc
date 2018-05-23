#include <iostream>

int main() {
    int x = 42;
    const int &ref_to_x = x;

    std::cout << "address of x: " << &x << std::endl;
    std::cout << "address of ref_to_x: " << &ref_to_x << std::endl;

    double y = 42;
    const int &ref_to_y = y;
    std::cout << "address of y: " << &y << std::endl;
    std::cout << "address of ref_to_y: " << &ref_to_y << std::endl;
}