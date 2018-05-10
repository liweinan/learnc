#include <stdio.h>

struct point {
    int x;
    int y;
} alpha = {4, 5};

typedef struct point Point;

struct point* modify_point(struct point* a_point_ptr) {
    a_point_ptr->x = a_point_ptr->x * 2; // 使用指针访问struct类型数据里的变量的时候，
    a_point_ptr->y = a_point_ptr->y * 2; // 要用箭头操作符。
    return a_point_ptr;
}

void print_point(Point* a_point_ptr) { // 使用typedef定义的类型（Point）也是一样的。
    printf("x: %d\n", a_point_ptr->x);
    printf("y: %d\n", a_point_ptr->y);
}

int main() {
    modify_point(&alpha); // &符号是取地址操作符，这里取`alpha`的地址，传递给`modify_point`函数。
    print_point(&alpha);
}