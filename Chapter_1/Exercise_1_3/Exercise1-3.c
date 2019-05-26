#include <stdio.h>

int main()
{
    // Declare variables
    float fahrenheit, celsius;
    int lower, upper, step;

    // Initialize variables
    lower = 0;
    upper = 300;
    step = 20;

    // Print description
    printf("Fahrenheit to Celsius:\n");

    // Loop over temperatures in steps of 20 from 0 till 300 fahrenheit
    fahrenheit = lower;
    while (fahrenheit <= upper)
    {
        // Calculate celcius and print
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%3.0f\t%6.2f\n", fahrenheit, celsius);

        // Add step to fahrenheit so it's ready for next calculation
        fahrenheit = fahrenheit + step;
    }
}