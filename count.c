#include <stdio.h>

int main(void) {
    //count blanks, tabs, and new lines
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;

    printf("Please input your text:\n");
    printf("PRESS CTRL-D to end input > ");
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }

    printf("Blanks: %d | Tabs: %d | Lines: %d\n", nb, nt, nl);
}