#include <iostream>

int main() {
    int x = 1;
    const int y = 2;

    int *const p1 = &x; // p1本身是const的，不能再指向别的变量的地址，编译器会检查这个规则。
    // p1 = &y; 不可以再赋值，variable is constant and can't be assigned to another address.

    // int *const p2 = &y; 不可以，p2本身是const的，但是它指向的位置不是const，所以不能指向y的地址，因为y是const int类型。
    const int *const p2 = &y; // 可以，p2本身是const，同时它指向const int类型的数据。

    const int *p3; // 这是一个指向`const int`类型的指针。
    p3 = &x; // 你可以拿它指向非const类型的x
    // *p3 = *p3 + 1; 但是既然p3认为自己是指向const int类型的数据，你就不可以再修改它指向的数据的值。
    // 否则编译器会报错：read-only error。

    p3 = &y; // p3自己不是const的，所以它还可以接下来指向y。

    std::cout << "p1: " << p1 << std::endl;
    std::cout << "&x: " << &x << std::endl;

    std::cout << "p2: " << p2 << std::endl;
    std::cout << "&y: " << &y << std::endl;

    std::cout << "p3: " << &y << std::endl;



}