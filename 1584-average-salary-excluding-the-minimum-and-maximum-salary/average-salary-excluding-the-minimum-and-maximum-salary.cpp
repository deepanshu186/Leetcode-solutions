class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double output;
        double ans=0;
        int n = salary.size();
        int count=0;
        for(int i=1 ; i<n-1 ; i++)
       {
           count++;
           ans=ans+salary[i];
       }
        output = ans / count;
        return output;
    }
};