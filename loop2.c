/*
$ cc loop2.c
$ ./a.out
> Hello, world!
Hello, world!
^D

-=-=-=-=-=-=-=-=-
$
*/
#include <stdio.h>

int main(void) {
    int ch;

    printf("> ");
    
	while ((ch = getchar()) != EOF) { // EOF对应CTRL-D
        printf("%c", ch);
	}

    printf("\n\n-=-=-=-=-=-=-=-=-\n");
}
