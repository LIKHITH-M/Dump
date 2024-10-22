/* Loop Invariant
In computer science, you could prove it formally with a loop invariant, where you state that a desired property is maintained in your loop. Such a proof is broken down into the following parts:

    Initialization: It is true (in a limited sense) before the loop runs.
    Maintenance: If it's true before an iteration of a loop, it remains true before the next iteration.
    Termination: It will terminate in a useful way once it is finished.


Challenge
In the InsertionSort code below, there is an error. Can you fix it? Print the array only once, when it is fully sorted.

Input Format
There will be two lines of input:
s - the size of the array
arr - the list of numbers that makes up the array

Output Format
Output the numbers in order, space-separated on one line.*/
// Study the whole code unless u dont have enough time.. I dont think they'll give the incorrect code..
#include <stdio.h>

void insertionSort(int N, int arr[]) {
    int i, j, value;
    for(i = 1; i < N; i++) {
        value = arr[i];
        j = i - 1;
        
        // Fix the while loop condition to correctly compare all elements( only for loop iteration values 
        while(j >= 0 && value < arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = value;
    }
    
    // Print the array only once, after sorting
    for(j = 0; j < N; j++) {
        printf("%d", arr[j]);
        if(j < N - 1) { // this if conditiion is the only thing to be added here
            printf(" ");
        }
    }
    printf("\n");
}
// everything below here is given and is correct
int main(void) {
    int N;
    scanf("%d", &N);
    int arr[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}


