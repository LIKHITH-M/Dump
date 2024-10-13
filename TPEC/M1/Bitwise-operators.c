#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// full funciton is written by you
int max (int n, int k){
    int and=0, or=0, xor=0;
    for (int i=1; i<n; i++){
        for (int j=i+1; j<=n; j++){
            int a = i&j, b = i|j, c = i^j; 
            if (a < k && and < a){
                and = a;
            }
            if (b < k && or < b){
                or = b;
            }
            if (c < k && xor < c){
                xor = c;
            }
        }
    }
    return printf("%d\n%d\n%d", and, or, xor);
}
// till here
int main() {
    
    int n, k;
    scanf("%d %d", &n, &k);
    max(n,k);//only this line is to be added here 
    
    return 0;
}
