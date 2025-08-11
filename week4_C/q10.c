#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; struct Node* child; };
struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data; newNode->next = NULL; newNode->child = NULL;
    return newNode;
}
struct Node* merge(struct Node* a, struct Node* b) {
    if (!a) return b;
    if (!b) return a;
    if (a->data < b->data) {
        a->next = merge(a->next, b);
        return a;
    } else {
        b->next = merge(a, b->next);
        return b;
    }
}
struct Node* flatten(struct Node* root) {
    if (!root || !root->next) return root;
    root->next = flatten(root->next);
    root = merge(root, root->next);
    return root;
}
void printList(struct Node* head) {
    while (head) { printf("%d ", head->data); head = head->next; }
}
int main() {
    struct Node* head = createNode(5);
    head->child = createNode(7);
    head->next = createNode(10);
    head = flatten(head);
    printList(head);
}