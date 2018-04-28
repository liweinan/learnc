#include <stdio.h>

int main() {

    int a[2][5] = {{11, 12, 13, 14, 15},
                   {21, 22, 23, 24, 25}};

    int *ptr1 = NULL;
    int *ptr2 = NULL;

    int *ptr_1_increases = NULL;
    int *ptr_2_increases = NULL;
    int *ptr_1_plus = NULL;
    int *ptr_2_plus = NULL;
    int *ptr_1_00 = NULL;
    int *ptr_2_10 = NULL;

    ptr1 = &a;
    ptr2 = a;

    printf("ptr1: %p.\n", ptr1);
    printf("ptr2: %p.\n\n", ptr2);

    ptr_1_increases = ptr1 + 1;
    ptr_2_increases = ptr2 + 1;

    printf("ptr_1_increases: %p.\n", ptr_1_increases);
    printf("ptr_2_increases: %p.\n\n", ptr_2_increases);

    ptr_1_plus = &a + 1;
    ptr_2_plus = a + 1;

    printf("ptr_1_plus: %p.\n", ptr_1_plus);
    printf("ptr_2_plus: %p.\n\n", ptr_2_plus);

    ptr_1_00 = &(a[0][0]);
    ptr_2_10 = &(a[1][0]);

    printf("ptr_1_00: %p.\n", ptr_1_00);
    printf("ptr_2_10: %p.\n\n", ptr_2_10);

    return 0;
}