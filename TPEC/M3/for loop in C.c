#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{ char *s[]={"null","one","two","three","four","five","six","seven","eight","nine"};
    int a, b;
    scanf("%d\n%d", &a, &b);
  	while(a<=b)
      {
          if((a<=9)&&(a>=1))
          {printf("%s\n",s[a]);}
          else 
          {
              if(a%2==0)
              {printf("even\n");}
              else {
              printf("odd\n");
              }
          }
         a++; 
      }
    return 0;
}

