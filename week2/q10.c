#include <stdio.h>

#define N 5  
int countZeroes(int mat[N][N]) {
    int row = N - 1;  
    int col = 0;
    int count = 0;

    while (col < N) {
        while (row >= 0 && mat[row][col] == 1) {
            row--;
        }
        count += (row + 1);

        col++;
    }

    return count;
}