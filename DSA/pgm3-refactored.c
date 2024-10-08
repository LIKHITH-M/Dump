#include <stdio.h>
#include <ctype.h>
#include <math.h>

char stack[100];  // Stack to hold operators and intermediate results
int top = -1;     // Top pointer to track the top element of the stack

// Function to push a character onto the stack
void push(char x)
{
    stack[++top] = x;  // Increment top and add the element at the new top position
}

// Function to pop the top element from the stack
char pop()
{
    if (top == -1)     // Check if the stack is empty
        return -1;     // Return -1 to indicate underflow
    else
        return stack[top--];  // Return the top element and decrement the top
}

// Function to return the priority of operators
int priority(char x)
{
    if (x == '(')
        return 0;  // '(' has the lowest priority
    if (x == '+' || x == '-')
        return 1;  // '+' and '-' have the same priority
    if (x == '*' || x == '/' || x == '%')
        return 2;  // '*', '/', and '%' have higher priority
    if (x == '^')
        return 3;  // '^' has the highest priority
    return 0;  // Default case, for safety
}

void main()
{
    char exp[20];  // Array to hold the infix expression
    char *e, x;    // Pointer to traverse the infix expression
    printf("enter the expression : ");  // Prompt for user input
    scanf("%s", exp);  // Read the infix expression
    printf("\n");
    
    e = exp;  // Set pointer 'e' to the start of the expression

    // Convert infix to postfix
    while (*e != '\0')  // Traverse till the end of the expression
    {
        if (isalnum(*e))  // If the character is alphanumeric (operand)
            printf("%c", *e);  // Directly print the operand
        else if (*e == '(')  // If the character is '(', push it to the stack
            push(*e);
        else if (*e == ')')  // If the character is ')', pop until '(' is found
        {
            while ((x = pop()) != '(')
                printf("%c", x);  // Print operators until '('
        }
        else  // If the character is an operator
        {
            while (priority(stack[top]) >= priority(*e))  // While top operator has equal or higher priority
                printf("%c", pop());  // Pop and print operators from the stack
            push(*e);  // Push the current operator onto the stack
        }
        e++;  // Move to the next character
    }

    // Pop and print remaining operators from the stack
    while (top != -1)
    {
        printf("%c", pop());
    }

    // Now the postfix expression is complete, start evaluating it
    char postfix[20];  // Array to hold the postfix expression
    char *p;  // Pointer to traverse the postfix expression
    int n1, n2, n3, num;  // Variables for operand and result calculation

    // Get the postfix expression for evaluation
    printf("\nEnter the result to calculate :: ");
    scanf("%s", postfix);

    p = postfix;  // Set pointer 'p' to the start of the postfix expression

    // Evaluate the postfix expression
    while (*p != '\0')  // Traverse till the end of the postfix expression
    {
        if (isdigit(*p))  // If the character is a digit (operand)
        {
            num = *p - 48;  // Convert char to integer (ASCII adjustment)
            push(num);  // Push the operand onto the stack
        }
        else  // If the character is an operator
        {
            n1 = pop();  // Pop the top two operands
            n2 = pop();
            switch (*p)  // Perform the operation based on the operator
            {
                case '+':
                    n3 = n2 + n1;
                    break;
                case '-':
                    n3 = n2 - n1;
                    break;
                case '*':
                    n3 = n2 * n1;
                    break;
                case '/':
                    n3 = n2 / n1;
                    break;
                case '^':
                    n3 = pow(n2, n1);  // Perform power operation
                    break;
                case '%':
                    n3 = n2 % n1;  // Perform modulus operation
                    break;
            }
            push(n3);  // Push the result onto the stack
        }
        p++;  // Move to the next character
    }

    // The final result will be the only element left on the stack
    printf("\nThe result of the converted postfix = %d", pop());
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
