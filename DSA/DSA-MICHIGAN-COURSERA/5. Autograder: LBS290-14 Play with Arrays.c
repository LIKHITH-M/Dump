#include <stdio.h>

int main() {
    int i, v, arr[10];
    int count = 0; // Counter for occurrences of 100

    // Read 10 integers into the array
  
    for(i = 0; i < 10; i++) {
        scanf("%d", &v);
        arr[i] = v;
    }

    // Print integers with the specified format
    for(i = 9; i >= 0; i--) {
        printf("numb[%d] = %d\n", i, arr[i]);
    }
printf("\n");
    // Searching for entries with the value 100
    printf("Searching for entries equal to 100\n");printf("\n");
    for(i = 0; i < 10; i++) {
        if(arr[i] == 100) {
            printf("Found 100 at %d\n", i); // Print the index
            count++; // Increment the count
        }
    }
printf("\n");
    // Print the count of entries equal to 100
    printf("Found %d entries with 100\n", count);

    return 0;
}
