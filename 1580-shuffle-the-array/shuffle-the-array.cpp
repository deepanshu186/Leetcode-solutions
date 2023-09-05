class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
           vector<int>v;
           vector<int>v1;
           vector<int> ans;
           for(int i = 0; i < n; i++)
           {
               v.push_back(nums[i]);    
           }
            for(int i = n; i < nums.size(); i++)
           {
               v1.push_back(nums[i]);    
           }
           int i=0,j=0;
           int p = v.size();
           int m = v1.size();
           while(i<p && j<m)
           {
               ans.push_back(v[i]);
               ans.push_back(v1[j]);
               i++;
               j++;
           }
           return ans;
    }
};