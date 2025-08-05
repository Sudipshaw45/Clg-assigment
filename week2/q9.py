def is_identity_matrix(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(n):
            if i == j:
                if matrix[i][j] != 1:
                    return False
            else:
                if matrix[i][j] != 0:
                    return False
    return True