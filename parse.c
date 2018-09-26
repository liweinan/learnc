/*
 * /Users/weli/projs/learnc/cmake-build-debug/parse
 * > 1 2 3
 * 123
 * x, y,z
 * xyz
 */
#include <stdio.h>
#include <ctype.h>

int main() {
    int ch;

    printf("> ");

    while ((ch = getchar()) != EOF) { // EOF对应CTRL-D
        if (isspace(ch) || (ch == ','))
            continue; // 分隔符pass掉，包括逗号和空格。
        printf("%c", ch);
    }

    printf("\n\n-=-=-=-=-=-=-=-=-\n");
}