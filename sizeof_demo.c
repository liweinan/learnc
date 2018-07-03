#include<stdio.h>

int main() {
    int *p;
    int a[100];

    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(*p));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(&a));
    printf("%d\n", sizeof(&a[0]));

    printf("%d\n", sizeof(char));
}