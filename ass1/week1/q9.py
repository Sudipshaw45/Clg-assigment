class Solution:
    def countFrequency(self, arr):
        freq = {}
        for num in arr:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        return freq
