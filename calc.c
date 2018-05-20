#include "inc_x.h"
#include "sum_inc_x_and_y.h"
#include <stdio.h>

int main() {
    int x;
    printf("inc_x(42): %d\n", inc_x(42));
    printf("sum_inc_x_and_y(42): %d\n", sum_inc_x_and_y(1, 2));
    return 0;
}
