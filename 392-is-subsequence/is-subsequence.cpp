class Solution {
public:
    bool f(int i ,int j , string& s1 , string& s2,vector<vector<int>>& dp){
        if(i<0) return true;
        if(j<0) return false;
        if(dp[i][j]!=-1) return dp[i][j];
        bool pick = false;
        if(s1[i]== s2[j]){
            pick = f(i-1,j-1,s1,s2,dp);
        }
        bool notpick = f(i,j-1,s1,s2,dp);
        return dp[i][j] = pick || notpick;

    }
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(n-1,m-1,s,t,dp);
    }
};