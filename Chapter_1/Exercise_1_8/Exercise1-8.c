#include <stdio.h>

int main()
{
    // Declare variables
    int character, spaceCount, tabCount, newlineCount;

    // Initialize variables
    spaceCount = tabCount = newlineCount = 0;

    // Loop untill receiving an EOF
    // Note: to simulate the EOF the ctrl+d has to come after a newline (in my experience)
    while ((character = getchar()) != EOF)
    {
        // Count spaces
        if (character == ' ')
            ++spaceCount;

        // Count tabs
        if (character == '\t')
            ++tabCount;

        // Count newlines
        if (character == '\n')
            ++newlineCount;
    }

    // Print results
    printf("blanks: %d, tabs: %d, new-lines: %d\n", spaceCount, tabCount, newlineCount);
}