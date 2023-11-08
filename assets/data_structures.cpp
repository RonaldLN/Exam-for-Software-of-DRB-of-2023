#include "data_structures.h"

/**
 * my_node Struct
 */

// Constructor
Node *create_my_node(int value) {
    Node *node = new Node;
    node->value = value;
    node->next = NULL;
    return node;
}

// Destructor
void delete_my_node(Node *node) {
    delete node;
}

// Interface for retrieving data from a my_node object
int get_value(Node *node) {   // Function to get the value of the node
    return node->value;
}

Node *get_next(Node *node) {  // Function to get the next node
    return node->next;
}

/**
 * linked_list Class
 */

// Constructor
linked_list::linked_list() {
    // create a node with value -1
    // this node will be the head of the linked list

    // STEP 1
    // ***YOUR CODE HERE***
}

// Destructor
linked_list::~linked_list() {
    Node *current = head;
    while (current != NULL) {
        Node *next = get_next(current);
        delete_my_node(current);
        current = next;
    }
}

// STEP 2
// Overloaded input stream operator to read 'linked_list' from input
void linked_list::insert(int value) {
    Node *new_node = create_my_node(value);

    Node *current = head;
    while (get_next(current) != NULL) {
        current = get_next(current);
    }
    current->next = new_node;
}
std::istream &operator>>(std::istream &input, linked_list &list) {
    int value;
    while (input >> value) {
        // Insert the value into the linked list
        // Hint: USE the method, DO NOT access the private member directly
        //       DO NOT copy the code from other methods

        // ***YOUR CODE HERE***
    }
    return input;
}

// Overloaded output stream operator to write 'linked_list' to output
// REPLACE ______ WITH YOUR CODE
std::ostream &operator<<(______) {
    // Hint: USE the INTERFACE of the node, DO NOT access the members directly

    // ***YOUR CODE HERE***
}

// STEP 3
// Overloaded operator to access elements by index
int linked_list::operator[](int index) {
    // Traverse the linked list to the index

    // ***YOUR CODE HERE***

    // REPLACE ______ WITH YOUR CODE
    return get_value(______);
}

// STEP 4
// Function to find a value in the linked list and return its index
int linked_list::find(int value) {
    // PSEUDOCODE:
    // WHILE the current node is not NULL
    //     IF the value of the current node is equal to the value
    //         RETURN the index of the current node
    //     END IF
    //     UPDATE the current node to the next node
    // END WHILE
    // RETURN -1

    // ***YOUR CODE HERE***
}
// Function to check if a value is found in the linked list
bool linked_list::is_found(int value) {
    // PSEUDOCODE:
    // IF the index of the value is -1
    //     RETURN false
    // ELSE
    //     RETURN true
    //
    // Hint: USE the method, DO NOT access the private member directly

    // ***YOUR CODE HERE***
}

// STEP 5
// Function to remove a value from the linked list
void linked_list::remove(int value) {
    // PSEUDOCODE:
    // GET the index of the value
    // IF the index is -1
    //     RETURN
    // ELSE IF the index is 0
    //     UPDATE the head to the next node
    //     DELETE the node at the index
    // ELSE
    //     GET the node before the node at the index (list[index - 1])
    //     UPDATE the next node of the node before the node at the index
    //         to the next node of the node at the index
    //     DELETE the node at the index
    // END IF
    //
    // Hint: USE the method, DO NOT access the private member directly

    // ***YOUR CODE HERE***
}

// STEP 6
// YOUR CODE HERE
