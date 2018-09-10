#include <stdio.h>

int main(int argc, char *argv[]) {
    int a[3][2] = {
            {0, 1},
            {2, 3},
            {4, 5}
    };

    printf("%p\n", &a[0][0]);

    int *p;
    p = a[0];

    printf("%p\n", p);

    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);

    int *q;
    q = &a[0][1];

    printf("%p\n", q);

    printf("%d\n", q[0]);
    printf("%d\n", q[1]);
    printf("%d\n", q[2]);
}
