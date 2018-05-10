
#include <stdio.h>

int foo(int x) {
    return x + 1;
}

typedef int (*Foo_type)(int);

int main(void) {
    int (*func_ptr)(int);
    func_ptr = foo;

    Foo_type func_ptr2; // 等价于func_ptr的声明。

    func_ptr2 = foo;

    printf("RESULT: %d\n", func_ptr(42));
    printf("RESULT: %d\n", func_ptr2(24));
}