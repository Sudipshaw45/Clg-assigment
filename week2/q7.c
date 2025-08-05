#include <stdio.h>
#include <stdlib.h>

int* multiply(int* A, int m, int* B, int n, int* resultSize) {
    int size = m + n - 1;
    int* prod = (int*) calloc(size, sizeof(int)); 

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            prod[i + j] += A[i] * B[j];
        }
    }

    *resultSize = size;
    return prod; 
}
