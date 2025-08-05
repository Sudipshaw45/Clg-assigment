def reverseArray(arr):
    return arr[::-1]

n = int(input())
arr = list(map(int, input().split()))

result = reverseArray(arr)
print(' '.join(map(str, result)))
 