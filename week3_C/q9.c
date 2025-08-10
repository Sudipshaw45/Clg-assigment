#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node* addLists(struct Node* l1, struct Node* l2) {
    struct Node dummy = {0, NULL}, *tail = &dummy;
    int carry = 0;
    while (l1 || l2 || carry) {
        int sum = carry + (l1 ? l1->data : 0) + (l2 ? l2->data : 0);
        carry = sum / 10;
        tail->next = newNode(sum % 10);
        tail = tail->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    return dummy.next;
}

void printList(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node *list1 = newNode(7);
    list1->next = newNode(5);
    list1->next->next = newNode(9);
    list1->next->next->next = newNode(4);
    list1->next->next->next->next = newNode(6);

    struct Node *list2 = newNode(8);
    list2->next = newNode(4);

    struct Node* result = addLists(list1, list2);
    printList(result);
    return 0;
}