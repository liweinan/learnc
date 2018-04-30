#include <stdio.h>

//replace string of blanks with a single blank
int main() {
    int c, lastc;
    lastc = NULL;

    printf("> ");
    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        if (c == ' ' && lastc != ' ')
            putchar(c);
        lastc = c;
    }

    return 0;
}