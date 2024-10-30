#include <stdio.h>
#include <string.h>

int main() {
    char first[101];   // Array for the first string with space for up to 100 characters + null terminator
    char second[101];  // Array for the second string with space for up to 100 characters + null terminator
    char result[205];  // Array for the concatenated result with additional space for " & " and null terminator

    // Prompt for two strings
    printf("Enter two strings\n");

    // Get the first string from the user
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';  // Remove newline character if any

    // Get the second string from the user
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0';  // Remove newline character if any

    // Concatenate the strings as "first & second"
    strcpy(result, first);       // Copy the first string into result
    strcat(result, " & ");       // Append " & " to result
    strcat(result, second);      // Append the second string to result

    // Display the concatenated result
    printf("%s\n", result);

    return 0;
}
