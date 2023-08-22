class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
          string str = "";
          for(auto i : words)
          {
              str += i[0];
          } 
          if(str == s)
          {
              return true;
          }
          return false;
    }
};