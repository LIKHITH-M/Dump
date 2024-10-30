
void py_lstrip(inp)
    char inp[]; 
{
    int start = 0; // Initialize a starting index

    // Loop to find the first non-whitespace character
    while (inp[start] != '\0' && isspace((unsigned char)inp[start])) {
        start++; // Move to the next character
    }

    // Shift the string to the left to remove leading whitespace
    if (start > 0) {
        // Move the rest of the string to the front
        int i = 0;
        while (inp[start + i] != '\0') {
            inp[i] = inp[start + i];
            i++;
        }
        inp[i] = '\0'; // Null-terminate the modified string
    }
}
