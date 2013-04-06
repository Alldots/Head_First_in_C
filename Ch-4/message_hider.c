#include <stdio.h>
#include <string.h>
#include "encrypt.h"

int main()
{
    char msg[80];
    while (fgets(msg, 80, stdin)) {
        /* hack the trailing newline */
        size_t len = strlen(msg) - 1;
        if (msg[len] == '\n')
             msg[len] = '\0';
        encrypt(msg);
        printf("%s", msg);
    }
}
