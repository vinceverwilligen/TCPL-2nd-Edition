#include <stdio.h>

int main()
{
    // Declare variables
    float fahrenheit, celsius;
    int lower, upper, step;

    // Initialize varibles
    lower = -20;
    upper = 150;
    step = 10;

    // Print description
    printf("Fahrenheit to Celsius:\n");

    // Loop over temperatures in steps of 10 from -20 till 150 celcius
    celsius = lower;
    while (celsius <= upper)
    {
        // Calculate fahrenheit and print
        fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%3.0f\t%6.0f\n", celsius, fahrenheit);

        // Add step to celcius so it's ready for next calculation
        celsius = celsius + step;
    }
}