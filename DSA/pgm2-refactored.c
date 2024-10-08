
#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // Define the maximum size of the stack

int stack[MAX], item, ch, top = -1, status = 0;  // Declare stack array, item, choice, top of the stack, and status

// Function to push an element onto the stack
void push(int stack[], int item)
{
    if (top == (MAX - 1))  // Check if the stack is full (Overflow condition)
        printf("\nOverflow\n");
    else
        stack[++top] = item;  // Increment top and add the item at the top
    status++;  // Increment status to keep track of the number of items in the stack
}

// Function to pop an element from the stack
int pop()
{
    if (top == -1)  // Check if the stack is empty (Underflow condition)
        printf("\nUnderflow\n");
    else
        return stack[top--];  // Return the top element and decrement the top
    status--;  // Decrement status to reflect the removal of an item
}

// Function to check if the stack contains a palindrome
void palindrome(int stack[])
{
    int temp, count = 0;
    temp = status;  // Store the number of elements in the stack
    for (int i = 0; i < temp; i++)  // Loop through the stack
    {
        if (stack[i] == pop())  // Compare the elements of the stack with the popped elements
            count++;  // Count the matching elements
    }
    if (count == temp)  // If all elements match, it's a palindrome
        printf("Palindrome\n");
    else
        printf("not palindrome\n");
}

// Function to display the contents of the stack
void display(int stack[])
{
    if (top == -1)  // Check if the stack is empty
    {
        printf("\nstack is empty\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)  // Loop through the stack from top to bottom
        {
            printf("|%d|\n", stack[i]);  // Print each element
        }
    }
}

void main()
{
    while (1)  // Infinite loop to keep the menu running until the user exits
    {
        printf("\n 1.push\t 2.pop\t 3.palindrome\t 4.display\t 5.exit\n");  // Display the menu
        printf("Enter the choice: ");
        scanf("%d", &ch);  // Read the user's choice

        switch (ch)  // Switch case for the menu options
        {
            case 1:  // Option to push an item onto the stack
                printf("Enter the item: ");
                scanf("%d", &item);  // Read the item to be pushed
                push(stack, item);  // Call the push function
                break;

            case 2:  // Option to pop an item from the stack
                printf("popped value = %d", pop());  // Call the pop function and display the popped value
                break;
    
            case 3:  // Option to check if the stack is a palindrome
                palindrome(stack);  // Call the palindrome function
                break;

            case 4:  // Option to display the contents of the stack
                display(stack);  // Call the display function
                break;

            case 5:  // Option to exit the program
                exit(0);

            default:  // Handle invalid choices
                printf("Invalid Choice\n");
                break;
        }
    }
}



In the given C program, we have an array-based implementation of a stack with a maximum size defined by MAX. The program begins by defining some variables such as item, ch, top, and status, along with initializing the stack to empty with a top value set to -1 and status set to 0.

The `push` function is implemented to add an element to the stack. If the stack is full (top is equal to MAX-1), it prints an overflow message. Otherwise, the item is added to the stack by incrementing the top index and increasing the status value.

The `pop` function checks if the stack is empty (top is -1) and if so, it prints an underflow message. If the stack is not empty, it returns the popped value after decrementing the top index and decreasing the status value.

In the `palindrome` function, we check if a string is palindromic by comparing each character in the stack with the popped value. If all characters match, we print "Palindrome" as the output. Otherwise, we print "not palindrome".

Lastly, in the `display` function, we check if the stack is empty and if so, we print a message saying that the stack is empty. If the stack is not empty, we display its contents by iterating from top to 0, printing each element using printf with the format specifier "%d".

In the main function, we use a while loop to provide a menu-driven interface for the user. The program continuously displays options for push, pop, palindrome checking, and displaying the stack. The user can input their choice from 1 to 5, and based on the selection, corresponding operations are performed using the functions defined earlier in the program.

Overall, this program allows users to interactively perform various stack-related operations such as pushing and popping elements, checking for palindromic strings, and displaying the status of the stack.
