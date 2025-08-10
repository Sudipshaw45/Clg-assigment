#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;  
        free(temp);            
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);  
}