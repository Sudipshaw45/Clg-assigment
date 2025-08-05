class Solution:

    def rotateMatrix(self, mat):
        n = len(mat)

        for row in mat:
            row.reverse()

        for i in range(n):
            for j in range(i + 1, n):
                mat[i][j], mat[j][i] = mat[j][i], mat[i][j]