class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr,int sc,int color,int first){
        int row=image.size();
        int col=image[0].size();
        if(sr<0 || sr>=row || sc<0 || sc>=col) return;
        if (image[sr][sc] != first || image[sr][sc] == color) return;

        image[sr][sc]=color;
        dfs(image,sr-1,sc,color,first);
        dfs(image,sr+1,sc,color,first);
        dfs(image,sr,sc-1,color,first);
        dfs(image,sr,sc+1,color,first);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int first=image[sr][sc];
        if(first!=color){
            dfs(image,sr,sc,color,first);
        }
        return image;
        
    }
};