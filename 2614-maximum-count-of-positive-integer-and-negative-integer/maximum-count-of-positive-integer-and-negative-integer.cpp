class Solution {
public:
    int maximumCount(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cntneg=0;
        int cntpos=0;
        for(int i =0;i<nums.size();i++)
        {
          if(nums[i]<0)
          {
            cntneg++;
          }else if(nums[i]>0)
          {
            cntpos++;
          }
        }
        int ans = max(cntneg,cntpos);
        return ans;
    }
};