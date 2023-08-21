class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       int n=arr.size();
       unordered_map<int,int> mp1 , mp2;
       for(int i=0; i< n; i++)
       {
           mp1[arr[i]]++;
       }
      
       for( auto it : mp1)
       {
            mp2[it.second]++;
            if(mp2[it.second]>1)
            {
                return false;
            }
       }
       return true;
    } 
};
