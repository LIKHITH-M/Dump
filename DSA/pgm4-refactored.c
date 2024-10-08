#include <stdio.h>  // Includes standard input/output functions
#include<stdlib.h>  // Includes standard library functions like exit

#define MAX 5       // Defines the maximum size of the priority queue as 5

// Initialize front and rear pointers to -1, indicating an empty queue
int front=-1, rear=-1;

// Define a structure for a job with process ID (pid), priority (pr), and burst time (bt)
typedef struct process
{
  int pid;  // Process ID
  int pr;   // Priority of the process
  int bt;   // Burst time (execution time) of the process
} job;  // Alias 'job' to refer to the structure

// Declare an array of jobs to act as the priority queue
job pjob[MAX];

// Function to insert a new job into the priority queue
void insert()
{
  int pid, pr, bt;  // Declare variables for process ID, priority, and burst time
  
  // Check if the queue is full
  if(rear==MAX-1)
  {
    printf("Overflow");  // If the queue is full, print "Overflow"
  }
  else
  {
    // Prompt the user to enter the process ID, priority, and burst time
    printf("Enter PID, PR AND BT: ");
    scanf("%d %d %d",&pid,&pr,&bt);  // Read the values entered by the user
    
    // If the queue is empty, initialize the front and rear pointers
    if(rear==-1)
    {
      rear++;  // Increment rear to point to the first element
      front++; // Increment front to point to the first element
    }
    else
    {
      rear++;  // Increment rear to add the new element at the end of the queue
    }
    
    // Assign the user-input values to the corresponding fields in the job structure
    pjob[rear].pid=pid;
    pjob[rear].pr=pr;
    pjob[rear].bt=bt;
  }
}

// Function to delete a job from the priority queue based on the highest priority
void delete()
{
  int i, pos=0, max=0;  // Declare variables to track position and maximum priority
  
  // Check if the queue is empty
  if(front==-1)
  {
    printf("Underflow\n");  // If the queue is empty, print "Underflow"
  }
  else
  {
    // If there is only one job left in the queue, reset the queue
    if(front==rear)
    {
      front=-1;  // Reset front pointer
      rear=-1;   // Reset rear pointer
    }
    else
    {
      // Find the job with the highest priority in the queue
      for(i=front;i<=rear;i++)
      {
        if(pjob[i].pr>max)  // Check if the current job has a higher priority
        {
          max=pjob[i].pr;   // Update max with the highest priority value
          pos=i;            // Update pos with the index of the highest priority job
        }
      }
      
      // Remove the job with the highest priority by shifting the remaining jobs
      for(i=pos;i<=rear;i++)
      {
        // Shift the job details (PID, priority, burst time) to overwrite the deleted job
        pjob[i].pid=pjob[i+1].pid;
        pjob[i].pr=pjob[i+1].pr;
        pjob[i].bt=pjob[i+1].bt;
      }
      rear--;  // Decrement the rear pointer to reflect the removal of the job
    }
  }
}

// Function to display the current status of the priority queue
void display()
{
  // Check if the queue is empty
  if(front==-1)
  {
    printf("Queue is Empty\n");  // If the queue is empty, print "Queue is Empty"
  }
  else
  {
    // Loop through the queue and display the PID, priority, and burst time of each job
    for(int i=front;i<=rear;i++)
    {
      printf("PID\t PR\t BT\n");  // Print table headers for process ID, priority, and burst time
      printf("%d\t %d\t %d\n",pjob[i].pid,pjob[i].pr,pjob[i].bt);  // Print details of each job
    }
  }
}

// Main function to handle the menu and user interaction
void main()
{
  int ch;  // Declare a variable to store the user's menu choice
  
  // Loop until the user chooses to exit
  while(ch<5)
  {
    // Display the menu options
    printf("\n1.Insert\t 2.Display\t 3.Delete\t 4.Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);  // Read the user's choice
    
    // Execute the corresponding function based on the user's choice
    switch(ch)
    {
      case 1: insert();  // Call the insert function to add a job to the queue
      break;
      case 2: display(); // Call the display function to show the current queue status
      break;
      case 3: delete();  // Call the delete function to remove a job from the queue
      break;
      case 4: exit(0);   // Exit the program if the user chooses to exit
      break;
      default: printf("\nInvalid choice:\n");  // Handle invalid menu choices
      break;
    }
  }
}







This code defines a menu-driven program for simulating the processing of batch jobs by a computer system. It utilizes a priority queue to handle job scheduling. The program allows users to add or remove items from the queue and displays the current status, which is the total number of items in the queue. The code uses an array named `pjob` with a maximum size defined as `MAX`.

The `insert()` function is used to add new jobs to the queue. It checks if the rear index has reached the maximum limit and, if so, prints an error message indicating overflow. Otherwise, it prompts the user for PID, PR (priority), and BT (burst time) values and assigns them to the next available slot in the `pjob` array.

The `delete()` function removes a job from the queue based on its priority. It sets variables `i`, `pos`, and `max` to keep track of the highest-priority job, its position, and its priority value. The function then loops through the queue from the front index to the rear index and shifts all elements one position to the left when it finds the highest-priority job. It also decreases the rear index to reflect the removal of the deleted item.

The `display()` function displays the contents of the queue by iterating through the array from the front index to the rear index, printing out the PID, PR, and BT values for each job.

In the main program, a while loop is used to continuously display the menu options for inserting a new job (1), displaying the queue (2), deleting a job (3), and exiting the program (4). The user's choice is read using `scanf()` and executed accordingly based on the switch statement. If the user enters an invalid choice, a message is printed to indicate that.

Overall, this program provides a simple interface for managing batch jobs with priority-based scheduling using a priority queue.
