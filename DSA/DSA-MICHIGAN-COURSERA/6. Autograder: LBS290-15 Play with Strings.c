

void process(line) 
    char line[]; 
{
    // Step 1: Print the string
    printf("\nString: %s\n", line);
    
    // Step 2: Count the number of characters in the string
    int length = strlen(line);
    printf("Count=%d\n", length);
    
    // Step 3: Print the 10th character if the string is longer than 10 characters
    if (length > 10) {
        printf("The ninth character is: %c\n", line[9]);
    } 
    int i;
    // Step 4: Replace blanks with dashes
    for ( i = 0; i < length; i++) {
        if (line[i] == ' ') {
            line[i] = '-'; // Replace space with dash
        }
    }
    
    // Step 5: Print the new string with dashes
    printf("String: %s\n", line);
}

