



 In this C program, we create linked lists A and B using a singly linked list data structure. We also define two helper functions, `insert()` to add nodes at the beginning of the list and `search()` to check if an element exists in the list. These functions are used in the main program to read user input for the number of elements, the data of both linked lists A and B, and then we create the union and intersection linked lists C and D as specified in the scenario.

In the `main()` function, we first initialize variables for counting the number of nodes in each linked list and defining pointers to the first node of both linked lists. We then use the `scanf()` function to read user input for the number of elements in linked lists A and B. Once we have this information, we call the `insert()` function to add each node to its respective linked list based on the order they are provided by the user.

After inserting all nodes into their corresponding linked lists, we use the `printList()` function to display the contents of both linked lists A and B. Then, we create unionLinkedList C by calling the `findunion()` function, which takes pointers to both linked lists as arguments. Similarly, we create intersectionLinkedList D by calling the `intersection()` function with pointers to both linked lists.

Finally, in the main program, we print out the contents of both union and intersection linked lists C and D respectively using the `printList()` function. This completes the execution of our program.
