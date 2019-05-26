#include <stdio.h>

int main()
{
    // Declare variables
    int character, spacesCount;

    // Initialize variables
    spacesCount = 0;

    // Loop untill receiving an EOF
    while ((character = getchar()) != EOF)
    {
        if (character == ' ')
        {
            // Count the spaces
            spacesCount++;

            // Output a space if only one is found
            if (spacesCount == 1)
                printf("%c", character);
        }
        else
        {
            // Reset spaces count
            spacesCount = 0;

            // Output its output
            printf("%c", character);
        }
    }
}