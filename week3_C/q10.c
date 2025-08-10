#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}
struct Node* createList() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    return head;
}
int main() {
    struct Node* head = createList();
    printf("Linked list elements: ");
    printList(head);
    return 0;
}