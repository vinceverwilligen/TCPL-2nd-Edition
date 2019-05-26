#include <stdio.h>

int main()
{
    // Declare variables
    int fahrenheit;
    float celcius;

    // Print description
    printf("Fahrenheit to Celsius:\n");

    // Loop over fahrenheit in steps of 20 from 300 till 0
    for (fahrenheit = 300; fahrenheit >= 0; fahrenheit -= 20)
    {
        // Calculate celcius and print
        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3d\t%6.2f\n", fahrenheit, celcius);
    }
}