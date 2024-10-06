#include <stdio.h>
#include <ctype.h>
#include <math.h>

// Define global variables for the stack and its top index
char stack[100];
int top = -1;

// Function to push an element onto the stack
void push(char x) {
   // If the stack is full, print "Overflow" message and return
   if (top == 99) {
       printf("Overflow\n");
       return;
   }    

   // Push the character into the stack at the next available position
   stack[++top] = x;
}

// Function to pop an element from the stack
char pop() {
   // If the stack is empty, print "Underflow" message and return -1
   if (top == -1) {
       printf("Underflow\n");
       return -1;
   }    

   // Pop the topmost element from the stack and decrement the top index
   return stack[top--];
}

// Function to determine the priority of an operator based on its ASCII value
int priority(char x) {
   // If the character is an opening parenthesis, its priority is 0
   if (x == '(') {
       return 0;
   }    

   // If the character is a binary arithmetic operator, assign priorities accordingly
   if (x == '+' || x == '-' || x == '*' || x == '/' || x == '%') {
       return 1;
   }    

   // If the character is '^', its priority is 3
   if (x == '^') {
       return 3;
   }    

   // Default case for all other characters: priority is 0
   default: {
       return 0;
   }
}

// Main program starts here
int main() {
   // Initialize variables and declare input strings
   char exp[20];
   char *e, x;
   double n1, n2, n3;

   // Print a prompt for the user to enter an expression
   printf("enter the expression : ");
   scanf("%s", exp);
   printf("\n");

   // Initialize pointers and loop through each character in the input string
   e = exp;
   while (*e != '\0') {
       // If the character is an alphanumeric value, print it out
       if (isalnum(*e)) {
           printf("%c", *e);
       }    

       // If the character is an opening parenthesis, push it onto the stack
       else if (*e == '(') {
           push(*e);
       }

       // Handle closing parentheses and their content accordingly
       else if (*e == ')') {
           while ((x = pop()) != '(') { // Remove all elements from the stack until we find a matching opening parenthesis
               printf("%c", x);
           }
       }    

       // Handle operators based on their priority
       else {
           // Pop two numbers from the stack and perform the desired operation using the pop()ed values
           n2 = pop();
           n1 = pop();
           switch(*e) {
               case '+': {
                   n3 = n2 + n1;
                   break;
               }
               case '-': {
                   n3 = n2 - n1;
                   break;
               }
               case '*': {
                   n3 = n2 * n1;
                   break;
               }
               case '/': {
                   n3 = n2 / n1;
                   break;
               }
               case '%': { // Percentage sign is handled by the modulus operator, so we can use it directly here
                   n3 = fmod(n2, n1);
                   break;
               }
               case '^': { // Power operation: raise n2 to the power of n1
                   n3 = pow(n2, n1);
                   break;
               }
               default: { /* Default case for all other characters */ }
           }

           // Push the result of the operation back onto the stack
           push((char) n3);
       }

       // Move to the next character in the input string
       e++;
   }

   // Once all characters have been processed, print out the topmost value on the stack (i.e., the final result)
   char postfix[20];
   char *p;
   printf("\nEnter the result to calculate :: ");
   scanf("%s",postfix);
   p = postfix;
   while(*p != '\0') { // Evaluate each character in the postfix expression and print out the result
       if (isdigit(*p)) {
           push((char) strtol(p, NULL, 10));
       }
       else {
           n2 = pop();
           n1 = pop();
           switch(*p) {
               case '+': {
                   n3 = n2 + n1;
                   break;
               }
               case '-': {
                   n3 = n2 - n1;
                   break;
               }
               case '*': {
                   n3 = n2 * n1;
                   break;
               }
               case '/': {
                   n3 = n2 / n1;
                   break;
               }
               case '%': { // Percentage sign is handled by the modulus operator, so we can use it directly here
                   n3 = fmod(n2, n1);
                   break;
               }
               case '^': { // Power operation: raise n2 to the power of n1
                   n3 = pow(n2, n1);
                   break;
               }
               default: { /* Default case for all other characters */ }
           }
           push((char) n3);
       }
       p++;
   }
   printf("\nThe result of the converted postfix = %lf\n", pop()); // The final result is printed out as a floating-point number

   return 0;
}








To explain the given code, let's go through each part step by step:

1. The program starts with importing the necessary libraries - `stdio.h` for standard input and output functions, `ctype.h` for character manipulation, and `math.h` for mathematical operations such as power calculation using the pow() function.

2. Three global variables are defined: char stack[100] to store the expression elements, int top to keep track of the current position in the stack, and void push() and char pop() functions for pushing and popping elements from the stack, respectively.

3. Inside the main function, the user is prompted to enter an infix expression using scanf().

4. The entered expression is stored in a character array called 'exp'.

5. The loop at the bottom of the main function converts the infix expression into postfix format by iterating through each character in the expression. During this process, characters are either printed directly if they are alphanumeric or pushed onto the stack if they are operators. Parentheses are handled separately to ensure correct order of operations.

6. The content of the stack is then displayed as the postfix expression.

7. Another loop inside the main function evaluates the postfix expression using stacks, calculating the result and printing it out.

8. Inside this second loop, each character in the postfix expression is processed. If it's a number, it is pushed onto the stack. Operators are handled based on their precedence rules: they are executed by popping two operands from the stack, performing the desired operation, and pushing the result back to the stack. Parentheses are also handled accordingly, making sure that all operations inside parentheses are performed first.

9. Once the loop completes, the final result is popped from the stack and printed out for the user.

This program supports various operators like '+', '-', '*', '/', '%', and alphanumeric operands. It handles both parenthesized and free-parenthesized expressions, allowing for more complex calculations.
