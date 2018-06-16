//
// Created by Ya Nan on 2018/6/16.
//

#include <iostream>
#include <vector>

using namespace std;

int func1(int a, int b) {
    return a + b;
}

int func2(int a, int b) {
    return a - b;
}

int func3(int a, int b) {
    return a * b;
}

int func4(int a, int b) {
    return a / b;
}

void compute(int a, int b, int(*p)(int, int)) {
    cout << p(a, b) << endl;
}

int main() {
    int i = 5, j = 10;
    decltype(func4) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;
    vector<decltype(func2)*> vF = {p1, p2, p3, p4};
    for (auto p:vF) {
        compute(i, j, p);
    }
    return 0;
}