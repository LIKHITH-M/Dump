void list_add(struct list *lst, int value) {
    struct lnode *new_node = malloc(sizeof(struct lnode)); // Allocate memory for new node
    if (new_node == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); // Exit if memory allocation fails
    }
    new_node->value = value; // Set the value of the new node
    new_node->next = NULL;   // New node will be the last node, so next is NULL

    if (lst->head == NULL) {
        // If the list is empty, set both head and tail to the new node
        lst->head = new_node;
        lst->tail = new_node;
    } else {
        // If the list is not empty, append the new node to the tail
        lst->tail->next = new_node; // Link the current tail to the new node
        lst->tail = new_node;        // Update the tail to the new node
    }
}

struct lnode * list_find(struct list *lst, int value) {
    struct lnode *cur = lst->head; // Start from the head of the list
    while (cur != NULL) {           // Traverse the list until the end
        if (cur->value == value) {  // If the current node's value matches
            return cur;             // Return the current node
        }
        cur = cur->next;           // Move to the next node
    }
    return NULL;                   // Return NULL if the value is not found
}
