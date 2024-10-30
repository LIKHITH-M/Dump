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

void list_remove(struct list *lst, int value) {
    struct lnode *cur = lst->head;
    struct lnode *prev = NULL;

    while (cur != NULL) { // Traverse the list
        if (cur->value == value) { // If the current node's value matches
            if (prev == NULL) {
                // If we're at the head of the list
                lst->head = cur->next; // Move head to the next node
                if (lst->head == NULL) {
                    // If the list is now empty, also set tail to NULL
                    lst->tail = NULL;
                }
            } else {
                // Bypass the current node
                prev->next = cur->next;
                if (cur->next == NULL) {
                    // If we removed the tail, update the tail pointer
                    lst->tail = prev;
                }
            }
            free(cur); // Free the memory of the removed node
            return; // Exit after removing the node
        }
        prev = cur; // Move to the next node
        cur = cur->next;
    }
    
}
