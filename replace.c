#include <stdio.h>
#include <stdlib.h>

//replace tabs and backspaces with visible characters
main() {
    int c;

    printf("> ");
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t' :
                putc('t', stdout);
                break;
            case ' ' :
                putc('_', stdout);
                break;
            default:
                putc('x', stdout);
        }
    }
}