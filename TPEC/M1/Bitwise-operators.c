/* In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, and C language, use to represent true and to represent false. The logical operators compare bits in two numbers and return true or false, or

, for each bit compared.

    Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

    Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

    Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by xor symbol

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// from here
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
    max(n,k);
    
    return 0;
}





