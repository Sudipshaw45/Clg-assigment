#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
struct Node* head = NULL;
void push(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void pairwiseSwap() {
    struct Node* temp = head;
    while (temp && temp->next) {
        int d = temp->data;
        temp->data = temp->next->data;
        temp->next->data = d;
        temp = temp->next->next;
    }
}
void display() {
    struct Node* temp = head;
    while (temp) { printf("%d ", temp->data); temp = temp->next; }
}
int main() {
    push(5); push(4); push(3); push(2); push(1);
    pairwiseSwap();
    display();
