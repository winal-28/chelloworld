#include <stdio.h>

int main()
{
    int fahr, celcius;
    int min, max, step;

    min = 0;   // minimum of the temperature scale is 0;
    max = 300; // maximum of the temperature scale is 300;
    step = 20; // skips by 20 each count, step size, idk how you actually call it lmao;

    fahr = min; // at first, fahrenheit's value is 0

    while (fahr <= max)
    {
        /* while the value of fahrenheit is less than or equal to the maximum (which is set to 300),
         it's going to keep converting the fahrenheit value to celcius and also skip by 20
        */
        celcius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celcius);
        fahr = fahr + step;
    }

    return 0;
}

// compile by running: gcc -Wall -g -c temperatureConverter.c && gcc -o temperatureConverter temperatureConverter.o -lm