#include <iostream>
#include <fstream>
#include <string>
#include <cerrno>

int main() {
    std::ifstream in("/tmp/bu_cun_zan");
    if (!in) {
        std::cout << "wtf: " << std::strerror(errno) << '\n';
    }
}