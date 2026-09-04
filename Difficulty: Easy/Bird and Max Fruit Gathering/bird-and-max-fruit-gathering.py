from itertools import accumulate
class Solution:

    def maxFruits(self, arr: list[int], m: int) -> int:
        """ code here """
        arr = arr + arr
        psum = list(accumulate(arr, initial=0))
        ans = 0
        for i in range(m, len(arr)):
            ans = max(ans, psum[i] - psum[i-m])

        return ans