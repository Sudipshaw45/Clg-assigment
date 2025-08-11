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
void reverse() {
    struct Node* temp = NULL;
    struct Node* current = head;
    while (current) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp) head = temp->prev;
}
void display() {
    struct Node* temp = head;
    while (temp) { printf("%d ", temp->data); temp = temp->next; }
}
int main() {
    insert(3); insert(2); insert(1);
    reverse();
    display();
}