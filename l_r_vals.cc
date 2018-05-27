#include <algorithm>

int main() {
    char &&r = 'C';

    char &&y = std::move(r);

    return r + y;
}