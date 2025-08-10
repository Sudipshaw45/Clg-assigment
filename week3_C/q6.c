#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int detectLoop(struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;

    while (slow && fast && fast->next) {
        slow = slow->next;           
        fast = fast->next->next;     
        if (slow == fast) {         
            return 1;
        }
    }
    return 0;
}
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}
int main() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = head->next->next;

    if (detectLoop(head))
        printf("Loop found in the linked list.\n");
    else
        printf("No loop found in the linked list.\n");

    return 0;
}
