#include <iostream>

int main() {
    auto i = 0, *p = &i;
    std::cout << *p << std::endl;

    int j = 3, &r = j;
    auto a = r;  // a is an int (r is an alias for i, which has type int)

    std::cout << "a: " << a << std::endl;
    std::cout << "j: " << j << std::endl;
    std::cout << "r: " << j << std::endl;

    j = j + 1;
    
    std::cout << "a: " << a << std::endl;
    std::cout << "j: " << j << std::endl;
    std::cout << "r: " << j << std::endl;
}
