class Solution {
public:
    int singleNumber(vector<int>& nums) {
          sort(nums.begin(),nums.end());
           int ans=nums[0];
          for(int i=1;i<nums.size();i++)
          {
             ans=ans ^ nums[i];
          } return ans;
    }
};