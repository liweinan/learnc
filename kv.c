#include <stdio.h>

#define LEN 2


int get_value_from_key(char **ks, char **vs, char *k) {
    printf("%c\n", ks[0][0]);
    printf("%c\n", ks[0][1]);
    printf("%c\n", ks[1][0]);
    printf("%c\n", ks[1][1]);

    printf("%c\n", k[0]);
    printf("%c\n", k[1]);

    for (int i = 0; i < LEN; i++) {
        if (ks[i][0] == k[0] && ks[i][1] == k[1]) {
            return i;
        }
    }
    return -1;

}

int main() {
    char k1[] = {'x', 'y'};
    char k2[] = {'a', 'b'};
    char *pk1 = k1;
    char *pk2 = k2;
    char *ks[] = {pk1, pk2};

    int v1[] = {1, 2};
    int v2[] = {8, 9};
    int *pv1 = v1;
    int *pv2 = v2;

    int *vs[] = {pv1, pv2};

    char key[] = {'a', 'b'};
    char *pkey = key;
    int idx = get_value_from_key(ks, vs, pkey);
    if (idx > -1) {
        printf("idx: %d\n", idx);
        printf("v: {%d,%d}\n", vs[idx][0], vs[idx][1]);
    }
}