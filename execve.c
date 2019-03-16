#include <stdio.h>
#include <unistd.h>

int main(void) {
    char *argv[] = {"jim", "jams", NULL};
    char *envp[] = {"some", "environment", NULL};
    if (execve("/bin/echo", argv, envp) == -1)
        perror("Could not execve");
    // can't reach here.
    return 1;
}
