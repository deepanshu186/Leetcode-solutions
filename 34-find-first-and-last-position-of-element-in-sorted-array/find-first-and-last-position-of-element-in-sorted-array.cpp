class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          vector<int> v;
          int size = nums.size();
          int st=-1,end=-1;
          for(int i = 0 ;i<size;i++)
          {
              if(nums[i] == target)
              {
                  st=i;
                  break;
              }
          } 
          for(int j = size-1 ; j>=0;j--)
          {
              if(nums[j] == target)
              {
                  end = j;
                  break;
              }
          } 
        return {st,end};  
    }
      
   
};