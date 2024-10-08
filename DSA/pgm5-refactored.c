#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list, containing an integer data and a pointer to the next node
typedef struct node {
    int data;            // Data field to store the value
    struct node *link;   // Pointer to the next node
} NODE;

// Declare pointers for linked lists A, B, C (union), and D (intersection)
NODE *LLone, *LLtwo, *unionLL, *interLL;

// Function to insert a node at the beginning of the linked list
NODE* insert(NODE **first, int num)
{
    // Allocate memory for the new node
    NODE* newNode = (NODE*) malloc(sizeof(NODE));
    newNode->data = num;  // Assign data to the node
    newNode->link = *first;  // Set the new node to point to the current first node
    *first = newNode;  // Update the first pointer to point to the new node
    return *first;  // Return the updated list
}

// Function to search for an element in the linked list
int search(NODE *first, int num)
{
    // Traverse the linked list
    while (first != NULL) {
        // Check if the current node's data matches the search value
        if (first->data == num) {
            return 1;  // Return 1 if the value is found
        }
        first = first->link;  // Move to the next node
    }
    return 0;  // Return 0 if the value is not found
}

// Function to find the union of two linked lists
NODE* findunion(NODE *LLone, NODE *LLtwo)
{
    unionLL = NULL;  // Initialize the union list as empty
    NODE *temp = LLone;
    
    // Insert all elements of LLone into unionLL
    while (temp != NULL) {
        insert(&unionLL, temp->data);  // Insert each element into unionLL
        temp = temp->link;  // Move to the next node in LLone
    }

    // Insert elements of LLtwo that are not already in LLone
    while (LLtwo != NULL) {
        if (!search(LLone, LLtwo->data)) {  // Check if the element is not in LLone
            insert(&unionLL, LLtwo->data);  // Insert the element into unionLL
        }
        LLtwo = LLtwo->link;  // Move to the next node in LLtwo
    }
    return unionLL;  // Return the union linked list
}

// Function to find the intersection of two linked lists
NODE* intersection(NODE *LLone, NODE *LLtwo)
{
    interLL = NULL;  // Initialize the intersection list as empty
    
    // Traverse LLone and check if its elements are present in LLtwo
    while (LLone != NULL) {
        if (search(LLtwo, LLone->data)) {  // Check if the element is in LLtwo
            insert(&interLL, LLone->data);  // Insert the common element into interLL
        }
        LLone = LLone->link;  // Move to the next node in LLone
    }
    return interLL;  // Return the intersection linked list
}

// Function to print the elements of a linked list
void printList(NODE *cur)
{
    // Traverse and print each node in the list
    while (cur != NULL) {
        printf("-->%d", cur->data);  // Print the data of the current node
        cur = cur->link;  // Move to the next node
    }
}

// Main function to handle user input and perform union and intersection operations
void main()
{
    int i, LLonecount, LLtwocount, temp;

    // Get the number of nodes for the first linked list (LLone)
    printf("\n Enter number of nodes in first Linked List: ");
    scanf("%d", &LLonecount);
    
    // Get the data for the first linked list (LLone)
    printf("\n Enter data of first linked list: ");
    for(i=0; i<LLonecount; i++) {
        scanf("%d", &temp);  // Read the data value
        insert(&LLone, temp);  // Insert the data into LLone
    }
    printList(LLone);  // Print the elements of LLone

    // Get the number of nodes for the second linked list (LLtwo)
    printf("\n Enter number of nodes in second Linked List: ");
    scanf("%d", &LLtwocount);

    // Get the data for the second linked list (LLtwo)
    printf("\n Enter data of second linked list: ");
    for(i=0; i<LLtwocount; i++) {
        scanf("%d", &temp);  // Read the data value
        insert(&LLtwo, temp);  // Insert the data into LLtwo
    }
    printList(LLtwo);  // Print the elements of LLtwo

    // Find the union of LLone and LLtwo
    findunion(LLone, LLtwo);
    
    // Find the intersection of LLone and LLtwo
    intersection(LLone, LLtwo);

    // Print the union linked list
    printf("\nUnion Linked List\n");
    printList(unionLL);

    // Print the intersection linked list
    printf("\nIntersection Linked List\n");
    printList(interLL);
}




 In this C program, we create linked lists A and B using a singly linked list data structure. We also define two helper functions, `insert()` to add nodes at the beginning of the list and `search()` to check if an element exists in the list. These functions are used in the main program to read user input for the number of elements, the data of both linked lists A and B, and then we create the union and intersection linked lists C and D as specified in the scenario.

In the `main()` function, we first initialize variables for counting the number of nodes in each linked list and defining pointers to the first node of both linked lists. We then use the `scanf()` function to read user input for the number of elements in linked lists A and B. Once we have this information, we call the `insert()` function to add each node to its respective linked list based on the order they are provided by the user.

After inserting all nodes into their corresponding linked lists, we use the `printList()` function to display the contents of both linked lists A and B. Then, we create unionLinkedList C by calling the `findunion()` function, which takes pointers to both linked lists as arguments. Similarly, we create intersectionLinkedList D by calling the `intersection()` function with pointers to both linked lists.

Finally, in the main program, we print out the contents of both union and intersection linked lists C and D respectively using the `printList()` function. This completes the execution of our program.
