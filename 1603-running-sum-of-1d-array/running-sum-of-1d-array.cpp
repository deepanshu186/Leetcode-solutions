class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         vector<int> v;
         int size =  nums.size();
         for(int i = 0;i< size; i++)
         {
             int sum=0;
            for(int j = 0 ; j<=i;j++)
            {
                sum+=nums[j];
            }
            v.push_back(sum);
         }
         return v;
    }
};