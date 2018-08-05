#include <stdio.h>

extern int x;

int main() {
    x = 2;
    printf("%d\n", x);
}