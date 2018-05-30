#include <iostream>

int &ref(int x) {
    int y = x;
    printf("y: %p\n", &y);
    return y;
}

int main() {
    int z = ref(42);
    printf("z: %p\n", &z);
}