#include <iostream>

void ref(int &v) {
    v++;
}

void ptr(int *p) {
    *p = *p + 1;
}


int main() {
    int i = 42;
    std::cout << "i: " << i << std::endl;
    ref(i);
    std::cout << "after `ref`: " << i << std::endl;
    ptr(&i);
    std::cout << "after `ptr`: " << i << std::endl;
    int *p = &i;
    *p = *p + 1;
    std::cout << "after `*p++`: " << i << std::endl;
}