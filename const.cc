#include <iostream>

int main() {
    const int x = 12;
    std::cout << x << std::endl;
//    x++; // error: cannot assign to variable 'x' with const-qualified type 'const int'

    int y = 24;
    const int *p = &x; // pointer to a const int variable
    int * const q = &y; // q is a const pointer
//    q = &x; // compile error
}