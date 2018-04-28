#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    int *ptr1 = a;
    int *ptr1_1;
    ptr1_1 = ptr1 + 1;

    printf("ptr1: %p\n", ptr1);
    printf("ptr1_1: %p\n", ptr1_1);
    printf("sizeof(int): %d\n", sizeof(int));

    return 0;
}