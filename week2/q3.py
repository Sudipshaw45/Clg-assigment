from typing import List
class Solution:
    def sumDiagonal(self, N : int , M : List[List[int]] ) -> int :
        ans = 0
        for i in range(N):
            ans+=M[i][i]
        return ans