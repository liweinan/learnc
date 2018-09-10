#include <stdio.h>
#define LEN 4

int ks[] = {2, 4, 6, 8};
char vs[] = {'a', 'b', 'c', 'd'};

char get_value_from_key(int k) {
    for (int i = 0; i < LEN; i++) {
        if (ks[i] == k) {
            return vs[i];
        }
    }
    return -1;
}

int main() {
    char v = get_value_from_key(2);
    printf("v: %c\n", v);
}