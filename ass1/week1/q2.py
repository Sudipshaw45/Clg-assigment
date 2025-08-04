class Solution:
    def largest(self, arr):
        """
        Returns the largest element in the array.
        """
        if not arr:
            raise ValueError("Array is empty")

        max_element = arr[0]
        for num in arr[1:]:
            if num > max_element:
                max_element = num
        return max_element

# Sample usage:
obj = Solution()
arr = [1, 8, 7, 56, 90]
res = obj.largest(arr)
print("Output:", res)