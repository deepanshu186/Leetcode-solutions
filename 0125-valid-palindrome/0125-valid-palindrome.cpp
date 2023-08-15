class Solution {
private:
     bool valid(char ch)
     {
         if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
             return 1;
               }
         return 0;
     }
     char toLowercase(char ch)
     {
         if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
         {
             return ch;
         }else{
            return ch-'A'+'a';
             }
     }
    bool checkpallindrome(string a)
    {
        int st=0,end=a.size()-1;
        while(st<=end)
        {
            if(a[st]!=a[end]){
                return 0;
            }else{
                st++;
                end--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
          string temp="";
          for(int i=0;i<s.size();i++)
          {
              if(valid(s[i]))
              {
                  temp.push_back(s[i]);
              }
          }
        for(int j=0;j<temp.size();j++)
        {
            temp[j]=toLowercase(temp[j]);
        }
     return checkpallindrome(temp);
  }
};