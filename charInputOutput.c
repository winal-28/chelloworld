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

// gcc -Wall -g -c charInputOutput.c && gcc -o charInputOutput charInputOutput.o -lm