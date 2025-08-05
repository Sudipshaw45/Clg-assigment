def count_zeroes(matrix):
    n = len(matrix)
    row = n - 1      
    col = 0
    count = 0

    while col < n:
        while row >= 0 and matrix[row][col] == 1:
            row -= 1

        count += (row + 1)

        col += 1

    return count