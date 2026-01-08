class Solution {
  public:
    int countSubarrays(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mpp;
        int odd_count = 0;
        int count = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==1){
                odd_count ++;
            }
            if(odd_count ==k){
                count ++;
            }
            if(mpp.find(odd_count-k)!=mpp.end()){
                count += mpp[odd_count-k];
            }
            if(mpp.find(odd_count)!=mpp.end()){
                mpp[odd_count] ++;
            }else{
                mpp[odd_count]=1;
            }
        }
        return count;
    }
};