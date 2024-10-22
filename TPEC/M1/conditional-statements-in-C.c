/* Task

Given a positive integer n denoting, do the following:
 If n is between 1-9 both inclusive, print the lowercase English word corresponding to the number (e.g., one for , two for, etc.).
If greater than 9, print Greater than 9.

Input Format
The first line contains a single integer,
*/

//erase everything and write below code

    // Write Your Code Here
    #include<stdio.h>

    int main() {
    int n;

    scanf("%d", &n);

    printf((n==1)?"one": (n==2)?"two":(n==3)?"three":(n==4)?"four":(n==5)?"five":(n==6)?"six":(n==7)?"seven":(n==8)?"eight":(n==9)?"nine":"Greater than 9");

    return 0;
}
