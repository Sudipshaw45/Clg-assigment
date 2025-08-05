def create_sparse_matrix(matrix):
    rows = len(matrix)
    cols = len(matrix[0]) if rows > 0 else 0
    sparse = []

    for i in range(rows):
        for j in range(cols):
            if matrix[i][j] != 0:
                sparse.append((i, j, matrix[i][j]))  

    return {
        'rows': rows,
        'cols': cols,
        'num_nonzero': len(sparse),
        'elements': sparse
    }