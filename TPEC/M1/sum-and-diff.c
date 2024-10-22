/*Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
Declare 4 variables: two of type int and two of type float.
Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
Use the + AND - operator to perform the following operations:
        Print the sum and difference of two int variable on a new line.
        Print the sum and difference of two float variable rounded to one decimal place on a new line. 

Input Format

The first line contains two integers.
The second line contains two floating point numbers.

Output Format

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to
 1 decimal place) separated by a space on the second line. 

*/

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
