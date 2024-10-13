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


