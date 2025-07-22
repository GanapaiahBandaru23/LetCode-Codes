class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>arr;
        int n=numRows;
        for(int i=0;i<n;i++){
            vector<int>new_arr;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    new_arr.push_back(1);
                }
                else{
                    new_arr.push_back(arr[i-1][j]+arr[i-1][j-1]);
                }

            }
            arr.push_back(new_arr);
        }
        return arr;
        
    }
};