/*
$ cc loop.c
$ ./a.out
> Hello, world!
Hello, world!

-=-=-=-=-=-=-=-=-
*/
#include <stdio.h>

int main(void) {
    int ch;

    printf("> ");
    // 这里的重点是：getchar()每次读取用户输入的一个字符。
    // 输入一串字符，程序一个一个char的读取，直到遇到回车（"\n"）。
    while ((ch = getchar()) != '\n')
        printf("%c", ch); // 然后一个一个char的打印出来，直到"\n"。
    // 注意：不要用EOF，那个是读取文件，用来判断文件内容结束的。
    // 判断用户输入的结束应该用'\n'，也就是用户输入的回车键作为结束条件。

    printf("\n\n-=-=-=-=-=-=-=-=-\n");
}