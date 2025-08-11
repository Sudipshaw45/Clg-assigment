#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
struct Node* last = NULL;
void insert(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    if (!last) {
        last = newNode;
        last->next = last;
    } else {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}
void display() {
    if (!last) return;
    struct Node* temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
}
int main() {
    insert(1); insert(2); insert(3);
    display();
