#include <stdio.h>

int main()
{
    // Declare variables
    int character;

    // Loop untill receiving an EOF
    while ((character = getchar()) != EOF)
    {
        // Replace tab by \t
        if (character == '\t')
            printf("\\t");
        // Replace backspace by \b
        else if (character == '\b')
            printf("\\b");
        /* Replace backslash by \\ */
        else if (character == '\\')
            printf("\\\\");
        // Print all other characters
        else
            printf("%c", character);
    }
}