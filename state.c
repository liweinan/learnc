#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int input = 0;
    int line = 0;
    int word = 0;
    int character = 0;
    int state;

    printf("> ");

    while ((input = getchar()) != 'z') { // 用'z'作为结束符号，方便调试
        ++character; // 所有的字符都算作character，包括空格，tab，回车，等等。
        if (input == '\n')
            ++line;
        if (input == ' ' || input == '\n' || input == '\t')
            state = OUT; // 这次标注为OUT，这样下一次循环的时候，如果还是空格，那么状态保持OUT，直到不是空白字符了以后……
        else if (state == OUT) {
            state = IN; // 跳到这里，然后说明是一个新的word开始。
            ++word;
        }
    }

    printf("line: %d, character: %d, word: %d", line, character, word);
    return 0;
}