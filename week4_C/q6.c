#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
struct Node* last = NULL;
void sortedInsert(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    if (!last) {
        last = newNode; last->next = last;
    } else if (data <= last->next->data) {
        newNode->next = last->next;
        last->next = newNode;
    } else {
        struct Node* temp = last->next;
        while (temp->next != last->next && temp->next->data < data)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
        if (temp == last) last = newNode;
    }
}
void display() {
    if (!last) return;
    struct Node* temp = last->next;
    do { printf("%d ", temp->data); temp = temp->next; } while (temp != last->next);
}
int main() {
    sortedInsert(2); sortedInsert(1); sortedInsert(3);
    display();
}