class Solution:
    def countAtMostK(self, arr, k):
        from collections import Counter
        count = Counter()
        left = 0
        ans = 0
        for r,e in enumerate(arr):
            count[e] += 1
            while len(count) > k and left<=r:
                count[arr[left]] -= 1
                if count[arr[left]] == 0:
                    count.pop(arr[left])
                left += 1
            ans += r-left + 1
        return ans