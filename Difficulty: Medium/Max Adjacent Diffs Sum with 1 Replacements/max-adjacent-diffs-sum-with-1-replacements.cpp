class Solution {
  public:
    int maxDiffSum(vector<int>& arr) {
        // code here
        vector<int>prev(2 , 0);
        int n = arr.size();
        for(int i = 1 ;i<n ; i++){
            vector<int>curr(2 , 0);
            curr[0] = max(prev[0] + abs(arr[i] - arr[i-1]) , prev[1] + abs(arr[i] - 1));
            curr[1] = prev[0] + abs(1 - arr[i-1]);
            swap(curr , prev);
        }
        return max(prev[0] , prev[1]);
    }
};