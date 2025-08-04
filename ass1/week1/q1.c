#include <stdio.h>

int main() {
    int n = 4;
    int arr[5] = {10, 20, 30, 40, 0};
    int ele = 50;
    
    printf("Array before insertion\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

   
    arr[n] = ele;

    printf("\nArray after insertion\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}