/* 
Topics covered:

Section 1.2 - Variables and Arithmetic Expressions
Section 1.3 - The for statement
Section 1.4 - Symbolic Constants

*/

#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 1

int main()
{
    float fahr;

    printf("\nCelsius\t\tFahrenheit\n\n"); //labels

    for (fahr = MAX; fahr >= MIN; fahr = fahr - STEP)
    {
        printf("%3.0f\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32)); // causes the values of the two integers fahr and celsius to be printed, with a tab (\t) between them
    }

    return 0;
}

// gcc temperatureConverter.c -o temperatureConverter.o -lm -Werror -Wall -Wextra