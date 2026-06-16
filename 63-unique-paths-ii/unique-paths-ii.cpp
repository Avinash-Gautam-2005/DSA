class Solution {
public:
    // int f(int i , int  j,vector<vector<int>>& obstacleGrid,vector<vector<int>>& dp){
    //     if(i>=0 && j>=0 && obstacleGrid[i][j]==1) return 0;
    //     if(i==0 && j==0) return 1;
    //     if(i<0 || j<0) return 0;
    //     if(dp[i][j] != -1) return dp[i][j];
        
    //     int up = f(i-1,j,obstacleGrid,dp);
    //     int left = f(i,j-1,obstacleGrid,dp);
    //     return dp[i][j]= up+left;
    // }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<int> prevdp(n,0);
        for(int i = 0;i<m;i++){
            vector<int> currdp(n,0);
            for(int j =0;j<n;j++){
                if(i>=0 && j>=0 && obstacleGrid[i][j]==1) currdp[j]=0;
               else if(i==0 && j==0) currdp[0] = 1;
                else{
                    int up=0;
                    int left=0;
                    if(i>0) up = prevdp[j];
                    if(j>0) left = currdp[j-1];
                    currdp[j]= up + left;
                }
            }
            prevdp = currdp;
        }
        return prevdp[n-1];
        
    }
};