/* Given a sentence S, print each word of the sentence S in a new line.

Input Format
The first and only line contains a sentence,

Output Format:
Print each word of the sentence in a new line.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char *s;
s = malloc(1024 * sizeof(char));
scanf("%[^\n]", s);
s = realloc(s, strlen(s) + 1);
//From here
for(int i=0;i<strlen(s);i++){
    if(*(s+i)==' ')
        printf("\n");
    else
        printf("%c",*(s+i));
}free(s);
//till here
return 0;}
