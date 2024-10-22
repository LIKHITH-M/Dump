/* Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space. 
    
            4 4 4 4 4 4 4  
            4 3 3 3 3 3 4   
            4 3 2 2 2 3 4   
            4 3 2 1 2 3 4   
            4 3 2 2 2 3 4   
            4 3 3 3 3 3 4   
            4 4 4 4 4 4 4   
            
Input Format

The input will contain a single integer n.

*/

#include <stdio.h>
//from here 
void printPattern(int n) {
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find the minimum of the distance to the edges
            int min = i < j ? i : j;
            min = min < size - i ? min : size - i - 1;
            min = min < size - j ? min : size - j - 1;
            
            // Print the corresponding value
            printf("%d ", n - min);
        }
        printf("\n");
    }
}
//till here
int main() {
    int n;
    scanf("%d", &n);
    
    printPattern(n);
    
    return 0;
}
