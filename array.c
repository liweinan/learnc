#include <stdio.h>

int main() {
    int data[] = {1, 2, 3};
    int *p = data;
    printf("data[2]: %d\n", p[2]);
    printf("addr of p: %p\n", p);
    printf("addr of p[2]: %p\n", &p[2]);

    char chars[] = {'1', '2', '3', '4', '5', '6', '7', '8'};
    int *q = chars;
    printf("chars[1]: %c\n", q[1]);
    printf("addr of q: %p\n", q);
    printf("addr of q[1]: %p\n", &q[1]);


}