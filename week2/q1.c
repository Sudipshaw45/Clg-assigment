#include <stdio.h>
#include <stdlib.h>

int* spirallyTraverse(int** matrix, int r, int c, int* returnSize) {
    int* result = (int*)malloc(r * c * sizeof(int));
    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;
    int index = 0;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            result[index++] = matrix[top][i];
        top++;
        for (int i = top; i <= bottom; i++)
            result[index++] = matrix[i][right];
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                result[index++] = matrix[bottom][i];
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result[index++] = matrix[i][left];
            left++;
        }
    }

    *returnSize = r * c;
    return result;
}