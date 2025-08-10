#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
int searchNode(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return 1; 
        }
        current = current->next;
    }
    return 0;
}
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    int key = 20;
    if (searchNode(head, key)) {
        printf("%d found in the list.\n", key);
    } else {
        printf("%d not found in the list.\n", key);
    }
    return 0;
}