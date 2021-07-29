// Section 1.5, page 18

#include <stdio.h>

int main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

// gcc charInputOutput.c -o charInputOutput.o -lm -Werror -Wall -Wextra