#include <stdio.h>

int main()
{
    // Simulate EOF as input ctrl+d in terminal
    int number = getchar() != EOF;

    // Result: 0
    printf("%d\n", number);
}