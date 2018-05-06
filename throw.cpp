#include <iostream>
#include <vector>

int main() {
    try {
        std::vector<int> v(5);
        v.at(10);
    } catch (const std::exception& e) {
        std::cout << "exception: " << e.what() << std::endl;
    }

    try {
        std::cout << "Throwing an integer exception...\n";
        throw 42;
    }  catch (int i) {
        std::cout << "integer: " << i << std::endl;
    }

    int *p = new int;
    delete *p;

}