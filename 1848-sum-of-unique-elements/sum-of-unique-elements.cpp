class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for( int i=0 ; i < n ; i++)
        {
            mp[nums[i]]++;
        }
        int sum=0;
        for(auto j : mp)
        {
            if(j.second==1)
            {
                sum=sum+j.first;
            }
        }
        return sum;
    }
};