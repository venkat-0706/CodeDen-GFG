
class Solution 
{
  public:
    vector<int> countDistinct(vector<int> &arr, int k) 
    {
        // code here.
        vector<int> a;
        unordered_map<int ,int>f;
        int n  = arr.size();
        
        for(int i=0;i<k;i++)
        {
            f[arr[i]]++;
        }
        
        a.push_back(f.size());
        
        for(int i=k;i<n;i++)
        {
            f[arr[i-k]]--;
            
            if(f[arr[i-k]] == 0)
            {
                f.erase(arr[i-k]);
            }
            
            f[arr[i]]++;
            
            a.push_back(f.size());
        }
        
        return a;
    }
};
