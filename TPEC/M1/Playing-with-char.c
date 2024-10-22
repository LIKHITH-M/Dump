/* Task

You have to print the character ch, in the first line. Then print s in next line. In the last line print sen in the sentence.

Input Format:
First, take a character,
as input.
Then take the string, as input.
Lastly, take the sentence as input.

Output Format:
Print three lines of output. The first line prints the character,ch.
The second line prints the string,s .
The third line prints the sentence,sen .
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{ // from here
  char ch;
  char s[100];
  char sen[100];
  
scanf("%c", &ch);
scanf("%s", s);scanf("\n");
scanf("%[^\n]%*sen", sen);

printf("%c\n", ch);
printf("%s\n", s);
printf("%s\n",sen);
   //till here
    return 0;
}
