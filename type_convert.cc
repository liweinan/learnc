// implicit conversion of classes:
// http://www.cplusplus.com/doc/tutorial/typecasting/
#include <iostream>

using namespace std;

class A {

};


class B {
public:
    // conversion from A (constructor):
    B(const A &x) {
        cout << "B(const A &x)" << endl;
    }

    // conversion from A (assignment):
    B &operator=(const A &x) {
        cout << "B &operator=(const A &x)" << endl;
        return *this;
    }

    // conversion to A (type-cast operator)
    operator A() {
        cout << "operator A()" << endl;
        return A();
    }
};

int main() {
    A foo;
    B bar = foo;    // calls constructor
    bar = foo;      // calls assignment
    foo = bar;      // calls type-cast operator
    return 0;
}
