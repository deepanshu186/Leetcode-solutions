class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
        int size=strs.size();
        string n=strs[0],m=strs[size-1],ans="";
        for(int i=0;i<n.size();i++)
        {
            if(n[i]==m[i])
            {
                ans=ans+m[i];
            }else
                break;
        }  return ans;
    }
};