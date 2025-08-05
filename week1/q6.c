#include <stdio.h>
#include <stdbool.h>
bool checkSortedRotated(int arr[], int n) {
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
        if (count > 1) {
            return false; 
        }
    }
    return true;
}

int main() {
    int arr[] = {3, 4, 5, 1, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    if (checkSortedRotated(arr, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
