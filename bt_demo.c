#include <stdio.h>

int bar(int x) {
    return x + 1;
}

int foo(int x) {
    return bar(x);
}


int main() {
    foo(1);
}