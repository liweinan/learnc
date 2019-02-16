#include <stdio.h>
#include <stdlib.h>

void callback_with_file(char *filename, char *mode, void *(*callback)(FILE *)) {
    FILE *fptr;

    if ((fptr = fopen(filename, mode)) == NULL) {
        perror("Error! opening file");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    void *result = callback(fptr);

    printf("%s\n", result);

    fclose(fptr);
}

void *foo(FILE *fptr) {
    // do somthing
    return "should be result";
};

int main() {
    callback_with_file("/dev/null", "r", foo);
}
