class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> v;
        int s = accounts.size();
        for(int i = 0; i<s;i++)
        {
            int sum = 0;
            int size = accounts[i].size();
            for(int j=0;j<size;j++)
            {
                sum=sum+accounts[i][j];
            }
            v.push_back(sum);
        }
        int n = *max_element(v.begin(),v.end());
        return n;
    }
};