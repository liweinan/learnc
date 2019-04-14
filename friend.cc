#include <iostream>

using namespace std;

class Foo; // Forward declaration of class Foo in order for example to compile.
class Bar {
private:
    int a;
public:
    Bar() : a(0) {}

    void show(Bar &x, Foo &y);

    friend void show(Bar &x, Foo &y); // declaration of global friend
};

class Foo {
private:
    int b;
public:
    Foo() : b(6) {}

    friend void show(Bar &x, Foo &y); // declaration of global friend
    friend void Bar::show(Bar &x, Foo &y); // declaration of friend from other class
};

// Definition of a member function of Bar; this member is a friend of Foo
void Bar::show(Bar &x, Foo &y) {
    cout << "Show via function member of Bar" << endl;
    cout << "Bar::a = " << x.a << endl;
    cout << "Foo::b = " << y.b << endl;
}

// Friend for Bar and Foo, definition of global function
void show(Bar &x, Foo &y) {
    cout << "Show via global function" << endl;
    cout << "Bar::a = " << x.a << endl;
    cout << "Foo::b = " << y.b << endl;
}

int main() {
    Bar a;
    Foo b;

    show(a, b);
    a.show(a, b);
}
