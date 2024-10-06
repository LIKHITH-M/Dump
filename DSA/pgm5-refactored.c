
 // Include necessary libraries for the program
#include <stdio.h>
#include <stdlib.h>

// Define a custom node structure with data and a pointer to the next node
typedef struct node {
    int data;
    struct node *next;
} NODE;

// Initialize pointers for linked lists A, B, C, and D
NODE* LLone = NULL; // Linked List A
NODE* LLtwo = NULL; // Linked List B
NODE* unionLL = NULL; // Union of A and B (Linked List C)
NODE* interLL = NULL; // Intersection of A and B (Linked List D)

// Function to insert a new node at the beginning of a linked list with data value 'num'
NODE* insert(NODE **first, int num) {
    NODE *newNode = (NODE *)malloc(sizeof(NODE)); // Allocate memory for new node
    newNode->data = num;                        // Set data field to the input number
    newNode->next = *first;                     // Make the next pointer point to the current first node
    *first = newNode;                          // Update the head of the list to point to the new node
    return *first;                             // Return the updated head pointer
}

// Function to search for a given number 'num' in a linked list starting from the head node 'head'
int search(NODE* first, int num) {
    NODE *current = first; // Initialize current node to the head of the list
    while (current != NULL) { // Loop until the end of the list is reached
        if (current->data == num) { // Check if the current data matches the target number
            return 1;             // If found, return a success flag
        }
        current = current->next;   // Move to the next node in the list
    }
    return 0;                  // If not found, return a failure flag
}

// Function to find the union of two linked lists by merging them into a new linked list (C)
NODE* findunion(NODE *LLone, NODE *LLtwo) {
    NODE* unionLL = NULL; // Initialize an empty linked list for the union
    NODE *currentOne = LLone; // Set the current node of Linked List A
    while (currentOne != NULL) { // Loop through each node in Linked List A
        if (!search(unionLL, currentOne->data)) { // If the node's data is not already present in Union Linked List C
            insert(&unionLL, currentOne->data);  // Insert it into the union linked list
        }
        currentOne = currentOne->next; // Move to the next node in A
    }
    NODE *currentTwo = LLtwo; // Set the current node of Linked List B
    while (currentTwo != NULL) { // Loop through each node in Linked List B
        if (!search(unionLL, currentTwo->data)) { // If the node's data is not already present in Union Linked List C
            insert(&unionLL, currentTwo->data);  // Insert it into the union linked list
        }
        currentTwo = currentTwo->next; // Move to the next node in B
    }
    return unionLL;             // Return the updated and finalized Union Linked List C
}

// Function to find the intersection of two linked lists by searching for common elements
NODE* intersection(NODE *LLone, NODE *LLtwo) {
    NODE* interLL = NULL; // Initialize an empty linked list for the intersection
    NODE *currentOne = LLone; // Set the current node of Linked List A
    while (currentOne != NULL) { // Loop through each node in Linked List A
        if (search(LLtwo, currentOne->data)) { // If the node's data is found in Linked List B
            insert(&interLL, currentOne->data);  // Insert it into the intersection linked list
        }
        currentOne = currentOne->next; // Move to the next node in A
    }
    return interLL;             // Return the updated and finalized Intersection Linked List D
}

// Function to print the contents of a linked list from its head to tail
void printList(NODE *cur) {
    while (cur != NULL) {
        printf("-->%d", cur->data);
        cur = cur->next;
    }
}

// Main function that handles user input and performs the required operations based on the linked lists A, B, C, and D
int main() {
    int i, LLonecount, LLtwocount, temp;
    
    printf("\n Enter number of nodes in first Linked List: ");
    scanf("%d", &LLonecount); // Read number of elements in linked list A from user input
    
    printf("\n Enter data of first linked list: ");
    for(i = 0; i < LLonecount; i++) {
        scanf("%d", &temp); // Read each node's data one by one and insert them into Linked List A
        insert(&LLone, temp);
    }
    printList(LLone); // Display the contents of Linked List A after inserting all nodes
    
    printf("\n Enter number of nodes in second Linked List: ");
    scanf("%d", &LLtwocount); // Read number of elements in linked list B from user input
    
    printf("\n Enter data of second linked list: ");
    for(i = 0; i < LLtwocount; i++) {
        scanf("%d", &temp); // Read each node's data one by one and insert them into Linked List B
        insert(&LLtwo, temp);
    }
    printList(LLtwo); // Display the contents of Linked List B after inserting all nodes
    
    // Perform union and intersection operations on linked lists A and B as required in the scenario
    findunion(LLone, LLtwo);
    intersection(LLone, LLtwo);
    
    printf("\nUnion Linked List\n"); // Display the union of linked list A and B (linked list C)
    printList(unionLL);
    
    printf("\nIntersection Linked List\n"); // Display the intersection of linked list A and B (linked list D)
    printList(interLL);
    
    return 0;
}










 In this C program, we create linked lists A and B using a singly linked list data structure. We also define two helper functions, `insert()` to add nodes at the beginning of the list and `search()` to check if an element exists in the list. These functions are used in the main program to read user input for the number of elements, the data of both linked lists A and B, and then we create the union and intersection linked lists C and D as specified in the scenario.

In the `main()` function, we first initialize variables for counting the number of nodes in each linked list and defining pointers to the first node of both linked lists. We then use the `scanf()` function to read user input for the number of elements in linked lists A and B. Once we have this information, we call the `insert()` function to add each node to its respective linked list based on the order they are provided by the user.

After inserting all nodes into their corresponding linked lists, we use the `printList()` function to display the contents of both linked lists A and B. Then, we create unionLinkedList C by calling the `findunion()` function, which takes pointers to both linked lists as arguments. Similarly, we create intersectionLinkedList D by calling the `intersection()` function with pointers to both linked lists.

Finally, in the main program, we print out the contents of both union and intersection linked lists C and D respectively using the `printList()` function. This completes the execution of our program.
