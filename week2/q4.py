class Solution:

    def transpose(self, mat):
        n = len(mat)

        tMat = []
        for j in range(n):
            row = []
            for i in range(n):
                row.append(mat[i][j])
            tMat.append(row)

        return tMat