#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void safe_open_and_operate_on_file(char *filename, char *mode, void (*op)(FILE *)) {
    FILE *fptr;

    if ((fptr = fopen(filename, mode)) == NULL) {
        perror("Error! opening file");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    op(fptr);

    fclose(fptr);
}

const char *readLine(FILE *file);

void print_lines(FILE *fptr) {
    readLine(fptr);
};

int main() {
    safe_open_and_operate_on_file("/tmp/foo.txt", "r", print_lines);
}

const char *readLine(FILE *file) {
    int maximumLineLength = 128;
    char *lineBuffer = (char *) malloc(sizeof(char) * maximumLineLength);

    if (lineBuffer == NULL) {
        printf("Error allocating memory for line buffer.");
        exit(1);
    }

    char ch = getc(file);
    int count = 0;

    while ((ch != '\n') && (ch != EOF)) {
        if (count == maximumLineLength) {
            maximumLineLength += 128;
            lineBuffer = realloc(lineBuffer, maximumLineLength);
            if (lineBuffer == NULL) {
                printf("Error reallocating space for line buffer.");
                exit(1);
            }
        }
        lineBuffer[count] = ch;
        count++;

        ch = getc(file);
    }

    lineBuffer[count] = '\0';
    char line[count + 1];
    strncpy(line, lineBuffer, (count + 1));
    free(lineBuffer);
    const char *constLine = line;
    printf("%s\n", constLine);
    return constLine;
}
