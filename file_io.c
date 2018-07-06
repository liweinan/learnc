#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main(void) {
    printf("%d\n", sizeof("CAFE"));

    FILE *f1 = fopen("file.bin", "wb");
    assert(f1);
    size_t r1 = fwrite("CAFE\n", sizeof(char), sizeof("CAFE\n"), f1);
    fclose(f1);

    char a[4] = {'C', 'A', 'F', 'E'};
    printf("sizeof a: %d\n", sizeof(a));

    FILE *f2 = fopen("file2.bin", "wb");
    assert(f2);
    fwrite(a, sizeof(char), sizeof(a), f2);
    fclose(f2);
}
