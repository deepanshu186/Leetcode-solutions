class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = haystack.find(needle);
        return found;
// without function use
            // int index = 0;
    // int j = 0;
    // while (haystack[index] != '\0')
    // {  
    //   if (haystack[index] == needle[j])
    //   {
    //      index++;j++;
    //   }
      
    //   else
    //   {
    //     index++;
    //     j = 0;
    //   }
    //   if (j == needle.length())
    //   {
    //     return index - needle.length();
    //   }
      
    // }

    // return -1;
    }
};