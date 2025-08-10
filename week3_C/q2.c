#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertInMiddle(struct Node* head, int data) {
    if (head == NULL) {
        return createNode(data);
    }
    struct Node* slow = head;
    struct Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    struct Node* newNode = createNode(data);
    newNode->next = slow->next;
    slow->next = newNode;

    return head;
}
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
int main() {
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(4);
    head->next->next->next = createNode(5);

    printf("Original list: ");
    printList(head);

    int valueToInsert = 3;
    head = insertInMiddle(head, valueToInsert);

    printf("List after inserting %d in middle: ", valueToInsert);
    printList(head);

    return 0;
}