class Solution {
public:
    void reverseArr(int arr[], int n){
        int start = 0;
        int end = n-1;
        while(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size(); 
        int arr[image.size()]; 

        for(int i = 0; i < n; i++){ 

            for(int j = 0; j < n; j++){ 

               
                if(image[i][j] == 1)
                    arr[j] = 0; 
                else
                    arr[j] = 1; 
            }

            reverseArr(arr, n); 

            for(int j = 0; j < n; j++){
                image[i][j] = arr[j]; 
            }
        }

        return image; 
    }
};