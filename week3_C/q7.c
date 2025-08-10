#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void removeLoop(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return;
    struct Node* slow = head;
    struct Node* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) { 
            break;
        }
    }
    if (slow != fast)
        return;
    slow = head;
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
int main() {
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = head->next->next;

    removeLoop(head);
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}