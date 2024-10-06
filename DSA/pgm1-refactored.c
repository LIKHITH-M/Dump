 // Include the required header files for standard input/output operations
#include<stdio.h>
// Include the required header file for dynamic memory allocation
#include<stdlib.h>

// Define the size of the string arrays
char str[100], pat[50], rep[50], ans[100];

// Initialize some variables to keep track of indices and flags
int i, j, c, m, k, flag = 0;

void stringmatch() {
 // Set initial values for the indices
 i = m = c = j = 0;

 // Loop through each character in the main string until we reach its end
 while(str[c] != '\0') {
 // If the current character in the main string matches the pattern string,
 if(str[m] == pat[i]) {
 // Increment the index for both the main and pattern strings
 i++; m++;

 // Check if the end of the pattern string has been reached
 if(pat[i] == '\0') {
 // Set a flag to indicate successful match
 flag = 1;
 // Replace the matched portion with the replace string in the answer string
 for(k = 0; rep[k] != '\0'; k++, j++) {
   ans[j] = rep[k];
 }
 // Reset indices and set the current position of main string as m
 i = 0;
 c = m;
 }
 }

 // If the current character in the pattern string is not found in the main string,
 // append it to the answer string instead
 else {
 // Append the current character in the main string to the answer string
 ans[j] = str[c];
 j++;

 // Increment the index for the main string and reset the index for the pattern string
 c++; m=c;
 }
 }

 // Null terminate the answer string
 ans[j] = '\0';
}

// Main function to read inputs and call the stringmatch() function
void main() {
 // Prompt the user to enter the main string
 printf("Enter a main string \n");
 // Read the input using gets() function and store it in str array
 gets(str);

 // Prompt the user to enter the pattern string
 printf("Enter a pattern string \n");
 // Read the input using gets() function and store it in pat array
 gets(pat);

 // Prompt the user to enter the replace string
 printf("Enter a replace string \n");
 // Read the input using gets() function and store it in rep array
 gets(rep);

 // Call the stringmatch() function to perform pattern matching operation
 stringmatch();

 // If flag is set to 1, print the resultant string after replacing all occurrences of pattern with replace string
 if(flag == 1) {
 printf("The resultant string is\n %s" , ans);
 }

 // Else, print a message indicating that pattern is not found in main string
 else {
 printf("Pattern string NOT found\n");
 }
}
