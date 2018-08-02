//
// Created by YaNan on 2018/7/12.
//

#include <iostream>

struct Object {
    // non-trivial destructor
    ~Object() { std::cout << "d"; }
};

int main() {
    int a = 4;

    // loop using goto
    label:

    Object obj;

    std::cout << a << " ";
    a = a - 2;

    if (a != 0) {
        goto label;  // jumps out of scope of obj, calls obj destructor
    }

    std::cout << '\n';
}