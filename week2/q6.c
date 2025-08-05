#include <stdlib.h>
int* addPolynomials(int *A, int m, int *B, int n, int *resultSize) {
    int size = (m > n) ? m : n;
    int *sum = (int *)malloc(size * sizeof(int));
    
    for (int i = 0; i < size; i++) {
        sum[i] = 0;
    }
        for (int i = 0; i < m; i++) {
        sum[i] = A[i];
    }
        for (int i = 0; i < n; i++) {
        sum[i] += B[i];
    }
    
    *resultSize = size;
    return sum;
}
