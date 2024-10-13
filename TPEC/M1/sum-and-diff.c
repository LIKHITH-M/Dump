#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   //add from here 
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    int diff = a-b;
    float a1,b1;
    scanf("%f %f",&a1,&b1);
    float sum1= a1+b1;
    //sum1=round(sum1*100)/100; 
    float diff1 = a1-b1;
    //diff1=round(diff1*100)/100; 
    printf("%d %d\n",sum,diff);
     printf("%.1f %.1f \n",sum1,diff1);
    
    //till here
    return 0;
}
