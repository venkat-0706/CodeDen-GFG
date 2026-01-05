class Solution:
    def maxSubarraySum(self, arr, k):
        n = len(arr)
        curr_sum = max_sum  = sum(arr[:k])
        for i in range(k,n):
            curr_sum += arr[i] - arr[i-k]
            if curr_sum > max_sum :
                max_sum = curr_sum 
        return max_sum