#include <iostream>

using namespace std;

#include <stdlib.h>
#include <string.h>

int *func(int *p) {
    //此时的p是个临时指针
    p = (int *) malloc(sizeof(int) * 10);
    memset(p, 0, sizeof(p));
    p[0] = 1;
    return p;  //返回地址
}

int main() {
    int *p = NULL;
    p = func(p);
    cout << p[0] << endl;
    return 0;
}
