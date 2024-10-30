#include <stdio.h>
#include <string.h>

int main()
{
    char memory[256] = {0}; // Initialize memory to zero
    char token[256];
    int position = 0;

    // Read commands until there are no more instructions
    while (scanf("%s", token) == 1) {
        if (strcmp(token, ">") == 0) {
            // Move position to the right
            if (position < 255) {
                position++; // Increment position if within bounds
            }
        } else if (strcmp(token, "<") == 0) {
            // Move position to the left
            if (position > 0) {
                position--; // Decrement position if within bounds
            }
        } else {
            // Convert token to an integer value
            int value = atoi(token);
            // Store value in memory at the current position
            if (value >= 0 && value <= 255) {
                memory[position] = (char)value; // Store the value in memory
            }
        }
    }

    // Print memory as a zero-terminated C character array
    printf("Memory:\n");int i;
    for ( i = 0; i < 256; i++) {
        if (memory[i] != 0) { // Only print non-zero values
            printf("%c", memory[i]); // Print as character
        }
    }
    printf("\n");

    return 0;
}
