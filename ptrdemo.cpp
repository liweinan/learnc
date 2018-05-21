#include <iostream>

int main() {
    int x = 42;
    int &aliasX = x;
    int *ptrX = &x;


    std::cout << aliasX << std::endl;
    std::cout << &aliasX << std::endl;
    std::cout << ptrX << std::endl;
    std::cout << *ptrX;
}