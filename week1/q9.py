class Solution:
    def frequencyCount(self, arr):
        n = len(arr)
        result = [0] * n  
        for num in arr:
            if 1 <= num <= n:  
                result[num - 1] += 1
        return result