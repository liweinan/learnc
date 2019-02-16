#include <stdio.h>
#include <stdlib.h>

void *callback_with_file(char *filename, char *mode, void *(*callback)(FILE *)) {
    FILE *fptr;

    if ((fptr = fopen(filename, mode)) == NULL) {
        perror("Error! opening file");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    void *result = callback(fptr);

    fclose(fptr);

    return result;
}

void *foo(FILE *fptr) {
    // do something
    return "<RESULT>";
};

int main() {
    void *result = callback_with_file("/dev/null", "r", foo);
    printf("%s\n", result);
}
