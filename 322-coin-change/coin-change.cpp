class Solution {
public:
    // int f(int idx, int tar, vector<int>& coins,vector<vector<int>>& dp) {
    //     if (idx == 0) {
    //         if (tar % coins[0] == 0)
    //             return tar / coins[0];
    //         return 1e9;
    //     }
    //     if(dp[idx][tar]!=-1) return dp[idx][tar];
    //     int nottake = 0 + f(idx - 1, tar, coins,dp);
    //     int take = INT_MAX;
    //     if (tar >= coins[idx]) {
    //         take = 1 + f(idx, tar - coins[idx], coins,dp);
    //     }
    //     return dp[idx][tar]= min(take, nottake);
    // }
    // int coinChange(vector<int>& coins, int amount) {
    //     int n = coins.size();
    //     vector<vector<int>>dp(n,vector<int>(amount+1,-1));
    //     int ans = f(n-1, amount, coins,dp);
    //     return (ans >= 1e9) ? -1 : ans;
    // }

    // TABULATION
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,0));
        for(int  T = 0;T<=amount ; T++){
            if(T%coins[0]==0){
                dp[0][T]=T/coins[0];
            }
            else dp[0][T]= 1e9;
        }
        for(int idx = 1;idx<n;idx++){
            for(int T=0;T<=amount;T++){
                int nottake = dp[idx-1][T];
                int take = INT_MAX;
                if(T>=coins[idx]){
                    take =1+ dp[idx][T-coins[idx]];
                }
                dp[idx][T] = min(take , nottake);
            }
        }
        int ans = dp[n-1][amount];
        if(ans>=1e9) return -1;
        return ans;
       
    }
};