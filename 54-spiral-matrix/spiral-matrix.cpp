class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> v;
        int total = row*col;
        int count=0;
        // index initial krdo
        int startrow = 0;
        int startcol = 0;
        int endrow = row-1;
        int endcol = col-1;
        while(count < total)
        {
            for(int i=startcol; count < total && i<=endcol;i++){
            v.push_back(matrix[startrow][i]);
            count++;
              }
               startrow++;
            for(int j=startrow; count < total && j<=endrow;j++){
             v.push_back(matrix[j][endcol]);
             count++;
            }
            endcol--;
            for(int k=endcol; count < total && k>=startcol;k--){
                v.push_back(matrix[endrow][k]);
                count++;
            }
            endrow--;
            for(int z=endrow; count < total && z>=startrow;z--){
                v.push_back(matrix[z][startcol]);
                count++;
            }
            startcol++;
        }
          return v;
       

    }
};