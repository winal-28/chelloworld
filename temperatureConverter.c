#include <stdio.h>

int main()
{
    float fahr;

    printf("\nCelsius\t\tFahrenheit\n\n"); //labels

    for (fahr = 300; fahr >= 0; fahr--)
    {
        printf("%3.0f\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32)); // causes the values of the two integers fahr and celsius to be printed, with a tab (\t) between them
    }

    return 0;
}

// compile by running: gcc -Wall -g -c temperatureConverter.c && gcc -o temperatureConverter temperatureConverter.o -lm