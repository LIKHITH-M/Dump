void py_rstrip(inp) 
    char inp[]; 
{
    int length = strlen(inp); // Get the length of the input string
    // Iterate backwards through the string to find the last non-space character
    while (length > 0 && inp[length - 1] == ' ') {
        length--; // Reduce length for each trailing space
    }
    inp[length] = '\0'; // Null-terminate the string at the new length
}
