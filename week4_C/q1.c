#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* prev; struct Node* next; };
struct Node* head = NULL;
void insertAtBeginning(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) head->prev = newNode;
    head = newNode;
}
void display() {
    struct Node* temp = head;
    while (temp) { printf("%d ", temp->data); temp = temp->next; }
}
int main() {
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);
    display();
}