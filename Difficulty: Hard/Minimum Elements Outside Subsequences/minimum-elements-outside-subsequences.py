class Solution:
    def minCount(self, arr):
        n = len(arr)

        # dp[inc][dec] = maximum elements selected so far
        # inc = last element of increasing subsequence
        # dec = last element of decreasing subsequence
        dp = [[-1] * 101 for _ in range(101)]

        # 0 means that the subsequence is empty
        dp[0][0] = 0

        for x in arr:
            newdp = [row[:] for row in dp]

            for inc in range(101):
                for dec in range(101):

                    if dp[inc][dec] == -1:
                        continue

                    curr = dp[inc][dec]

                    # Put x in increasing subsequence
                    if x > inc:
                        newdp[x][dec] = max(
                            newdp[x][dec],
                            curr + 1
                        )

                    # Put x in decreasing subsequence
                    if x < dec or dec == 0:
                        newdp[inc][x] = max(
                            newdp[inc][x],
                            curr + 1
                        )

                    # Don't select x
                    newdp[inc][dec] = max(
                        newdp[inc][dec],
                        curr
                    )

            dp = newdp

        # Maximum number of elements that can be selected
        max_selected = max(
            max(row) for row in dp
        )

        return n - max_selected