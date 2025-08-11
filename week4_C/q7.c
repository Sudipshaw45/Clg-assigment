#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
int isCircular(struct Node* head) {
    if (!head) return 1;
    struct Node* temp = head->next;
    while (temp && temp != head)
        temp = temp->next;
    return temp == head;
}
int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->next = head;
    printf("%d", isCircular(head));
}