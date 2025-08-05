int getSecondLargest(int *arr, int n) {
    if (n < 2) return -1;

    int first = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second == -1) ? -1 : second;
}
