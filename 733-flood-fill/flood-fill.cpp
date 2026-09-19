class Solution {
public:
    void dfs(int i , int j , vector<vector<int>>& image , vector<vector<int>>& ans, int initColor,int color){
        int n = image.size();
        int m = image[0].size();
        ans[i][j] = color;
        //up
        if(i-1>=0 && ans[i-1][j] == initColor){
            dfs(i-1,j,image,ans,initColor,color);
        }
        if(i+1<n && ans[i+1][j] == initColor){
            dfs(i+1,j,image,ans,initColor,color);
        }
        if(j-1>=0 && ans[i][j-1] == initColor){
            dfs(i,j-1,image,ans,initColor,color);
        }
        if(j+1<m && ans[i][j+1] == initColor){
            dfs(i,j+1,image,ans,initColor,color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int initColor = image[sr][sc];
        if(initColor == color) return image;
        vector<vector<int>>ans = image;
       dfs(sr,sc,image,ans,initColor,color);
       return ans;
        
    }
};