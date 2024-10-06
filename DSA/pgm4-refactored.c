
 // Include standard input and output libraries for the program
#include <stdio.h>
// Include stdlib library for dynamic memory allocation and other utility functions
#include<stdlib.h>

// Define a constant MAX, representing the maximum number of items in the queue
#define MAX 5
// Initialize front and rear indices to -1 as initially there are no elements in the queue
int front=-1, rear=-1;

// Create a user-defined data structure 'job' for storing process ID, priority, and burst time
typedef struct process
{
 int pid; // Process ID
 int pr;  // Priority
 int bt;  // Burst time
}job;

// Declare an array 'pjob' of size MAX to store job information
job pjob[MAX];

// Define functions for inserting, deleting, and displaying items in the queue
void insert();
void delete();
void display();

// Start execution of the program from main function
int main()
{
 int ch; // Read user's choice from the console
// Loop to provide users with menu options to interact with the queue system
 while(ch<5)
 {
  printf("\n1.Insert\t 2.Display\t 3.Delete\t 4.Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &ch); // Read user's choice and assign it to 'ch' variable

  // Switch statement to execute specific functions based on user input
  switch(ch)
  {
    case 1: insert(); // Call the 'insert()' function if the user selects option 1
             break;
    case 2: display(); // Call the 'display()' function if the user selects option 2
             break;
    case 3: delete(); // Call the 'delete()' function if the user selects option 3
             break;
    case 4: exit(0); // Exit the program if the user selects option 4
             break;
// If none of the above options are selected, print an error message
    default: printf("\nInvalid choice:\n");
             break;
  } // End of switch statement
} // End of while loop
} // End of main function











This code defines a menu-driven program for simulating the processing of batch jobs by a computer system. It utilizes a priority queue to handle job scheduling. The program allows users to add or remove items from the queue and displays the current status, which is the total number of items in the queue. The code uses an array named `pjob` with a maximum size defined as `MAX`.

The `insert()` function is used to add new jobs to the queue. It checks if the rear index has reached the maximum limit and, if so, prints an error message indicating overflow. Otherwise, it prompts the user for PID, PR (priority), and BT (burst time) values and assigns them to the next available slot in the `pjob` array.

The `delete()` function removes a job from the queue based on its priority. It sets variables `i`, `pos`, and `max` to keep track of the highest-priority job, its position, and its priority value. The function then loops through the queue from the front index to the rear index and shifts all elements one position to the left when it finds the highest-priority job. It also decreases the rear index to reflect the removal of the deleted item.

The `display()` function displays the contents of the queue by iterating through the array from the front index to the rear index, printing out the PID, PR, and BT values for each job.

In the main program, a while loop is used to continuously display the menu options for inserting a new job (1), displaying the queue (2), deleting a job (3), and exiting the program (4). The user's choice is read using `scanf()` and executed accordingly based on the switch statement. If the user enters an invalid choice, a message is printed to indicate that.

Overall, this program provides a simple interface for managing batch jobs with priority-based scheduling using a priority queue.
