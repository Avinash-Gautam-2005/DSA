class Solution {
public:
    int f(int idx , int tar, vector<int>& coins, vector<vector<int>>& dp){
        if(idx==0){
            if(tar%coins[0]==0){
                return 1;
            }
            return 0;
        }
        if(dp[idx][tar]!=-1) return dp[idx][tar];
        int nottake = f(idx-1,tar,coins,dp);
        int take = 0;
        if(tar>=coins[idx]){
            take = f(idx,tar-coins[idx],coins,dp);
        }
        return dp[idx][tar] =  take + nottake;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(n-1,amount,coins,dp);
        
    }
};