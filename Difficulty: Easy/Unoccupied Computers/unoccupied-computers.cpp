class Solution {
  public:
    int solve(int n, string s) {
        int ans = 0;

        vector<int> freq(26,0);

        // 1  : person has visited and got a computer
        // -1 : person has visited and din't got a computer
        // 0  : person has not made a visit yet

        for(auto ele : s) {
            if(freq[ele-'A'] == 1) {
                freq[ele-'A']--;
                n++;
            } else if(freq[ele-'A'] == -1) {
                freq[ele-'A']++;
            } else {
                if(n) {
                    freq[ele-'A']++;
                    n--;
                } else {
                    ans++;
                    freq[ele-'A']--;
                }
            }
        }

        return ans;
    }
};