#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
int getCount(struct Node* head) {
    int count = 0;
    while (head) { count++; head = head->next; }
    return count;
}
int getIntersection(int d, struct Node* head1, struct Node* head2) {
    struct Node* current1 = head1;
    struct Node* current2 = head2;
    for (int i = 0; i < d; i++) current1 = current1->next;
    while (current1 && current2) {
        if (current1 == current2) return current1->data;
        current1 = current1->next;
        current2 = current2->next;
    }
    return -1;
}
int main() {
    struct Node* newNode;
    struct Node* head1 = malloc(sizeof(struct Node));
    struct Node* head2 = malloc(sizeof(struct Node));
    head1->data = 10; head1->next = NULL;
    head2->data = 3; head2->next = NULL;
    newNode = malloc(sizeof(struct Node));
    newNode->data = 15; newNode->next = NULL;
    head1->next = newNode;
    head2->next = newNode;
    printf("%d", getIntersection(0, head1, head2));
}