#include <iostream>

int main() {
    int *p = new int;
    std::cout << "address of p:" << p;
    delete p;
}
