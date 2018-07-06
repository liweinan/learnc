#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main(void) {
    printf("%d\n", sizeof("CAFE"));

    FILE *f1 = fopen("file.bin", "wb");
    assert(f1);
    size_t r1 = fwrite("CAFE\n", sizeof(char), sizeof("CAFE\n"), f1);
    fclose(f1);
}
