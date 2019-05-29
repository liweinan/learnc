#include <iostream>

int main() {

    // https://www.geeksforgeeks.org/difference-between-const-int-const-int-const-and-int-const/

    const int x = 12;
    std::cout << x << std::endl;
//    x++; // error: cannot assign to variable 'x' with const-qualified type 'const int'

    int y = 24;
    const int *p = &x; // pointer to a const int variable
    int * const q = &y; // q is a const pointer
//    q = &x; // compile error

    // 我们把z的值拷贝给o
    // z是const的，不能被改变，我们只是把z的值拷贝给o，o的值后续可以改变。
    // 所以z还是不可以改变的，并没有被ignored。
    const int z = 14;
    int o = z;

    // 如果我们直接把z的地址给一个指向不是const int类型的指针，就出错了：
//    int *m = &z; // compile error

    // 所以指针必须是只想const int类型数据的
    const int *m = &z; // ok

    // 指针本身是const没用：
//    int * const n = &z; // compile error

// 指针指向const int，同时自己也是const，没有问题
// 下面两种写法一样的意思：
    int const* const n = &z;
    const int* const n2 = &z;
}