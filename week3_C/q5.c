#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
int findNthFromLast(struct Node* head, int N) {
    struct Node* main_ptr = head;
    struct Node* ref_ptr = head;
    for (int i = 1; i < N; i++) {
        if (ref_ptr == NULL) 
            return -1;
        ref_ptr = ref_ptr->next;
    }
    if (ref_ptr == NULL)  
        return -1;
    while (ref_ptr->next != NULL) {
        main_ptr = main_ptr->next;
        ref_ptr = ref_ptr->next;
    }
    return main_ptr->data;
}
struct Node* createNode(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}
int main() {
    struct Node* head = createNode(35);
    head->next = createNode(15);
    head->next->next = createNode(4);
    head->next->next->next = createNode(20);

    int N = 2;
    int result = findNthFromLast(head, N);

    if (result != -1)
        printf("The %d-th node from the end is %d\n", N, result);
    else
        printf("The list is shorter than %d nodes.\n", N);

    return 0;
}