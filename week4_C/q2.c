#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* prev; struct Node* next; };
struct Node* head = NULL;
void insert(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data; newNode->prev = NULL; newNode->next = head;
    if (head) head->prev = newNode;
    head = newNode;
}
void deleteNode(struct Node* del) {
    if (!head || !del) return;
    if (head == del) head = del->next;
    if (del->next) del->next->prev = del->prev;
    if (del->prev) del->prev->next = del->next;
    free(del);
}
void display() {
    struct Node* temp = head;
    while (temp) { printf("%d ", temp->data); temp = temp->next; }
}
int main() {
    insert(3); insert(2); insert(1);
    display();
    deleteNode(head->next);
    printf("\n");
    display();
