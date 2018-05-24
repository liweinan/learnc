#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec;
    ivec.push_back(42);
    ivec.push_back(24);
    std::cout << ivec[0] << std::endl;
    std::cout << ivec[1] << std::endl;
}