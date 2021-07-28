#include <stdio.h>

int main()
{
    int fahr, celcius;
    int min, max, step;

    min = 0;   // minimum of the temperature scale is 0;
    max = 300; // maximum of the temperature scale is 300;
    step = 20; // skips by 20 each count, step size, idk how you actually call it lmao;

    fahr = min; // at first, fahrenheit's value is 0

    printf("Celcius\tFahrenheit\n"); //labels

    for (fahr = min; fahr <= max; fahr++)
    {
        /* while the value of fahrenheit is less than or equal to the maximum (which is set to 300),
         it's going to keep converting the fahrenheit value to celcius and also skip by 20
        */
        celcius = 5 * (fahr - 32) / 9;
        /*
        "The reason for multiplying by 5 and dividing by 9 instead of just multiplying by 5/9 is that in
        C, as in many other languages, integer division truncates: any fractional part is discarded.
        Since 5 and 9 are integers. 5/9 would be truncated to zero and so all the Celsius temperatures
        would be reported as zero." -Book
         */
        printf("%3d\t%6d\n", fahr, celcius); // causes the values of the two integers fahr and celsius to be printed, with a tab (\t) between them
        fahr = fahr + step;
    }

    return 0;
}

// compile by running: gcc -Wall -g -c temperatureConverter.c && gcc -o temperatureConverter temperatureConverter.o -lm