class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
         int n = nums.size();
         int s = 0;
         for(int i = 0; i<n; i++)
         {
             s=s+nums[i];
         }
         int s1 = 0;
         for(int i = 0 ; i < n ; i++)
         {
             if(nums[i]>=10)
             {
                int number = nums[i];
                 while(number!=0)
                 {
                     int rem = number % 10;
                     s1=s1+rem;
                     number = number / 10;
                 }
             }else{
             s1=s1+nums[i];
             }
         }
         int ans = s-s1;
         return ans;
    }
};