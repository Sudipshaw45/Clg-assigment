#include <stdio.h>
#include <stdlib.h>

int* dynamicArray(int n, int q, int queries[][3], int* returnSize) {
    int** seqList = malloc(n * sizeof(int*));
    int* sizes = calloc(n, sizeof(int));    
    int* capacities = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        capacities[i] = 1;
        seqList[i] = malloc(sizeof(int));
    }

    int lastAnswer = 0;
    int* result = malloc(q * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < q; i++) {
        int qType = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];
        int idx = (x ^ lastAnswer) % n;

        if (qType == 1) {
            if (sizes[idx] == capacities[idx]) {
                capacities[idx] *= 2;
                seqList[idx] = realloc(seqList[idx], capacities[idx] * sizeof(int));
            }
            seqList[idx][sizes[idx]] = y;
            sizes[idx]++;
        } else { // qType == 2
            int size = sizes[idx];
            lastAnswer = seqList[idx][y % size];
            result[*returnSize] = lastAnswer;
            (*returnSize)++;
        }
    }

    free(sizes);
    free(capacities);
    return result;
}