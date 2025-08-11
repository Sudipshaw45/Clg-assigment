class Solution:
    def josephus(self, n, k):
        def solve(n, k):
            if n == 1:
                return 0
            return (solve(n - 1, k) + k) % n
        
        return solve(n, k) + 1