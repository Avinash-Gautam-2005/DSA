class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        vector<int> dp(n, -1);
        dp[0] = nums[0];

        for(int i = 1; i < n - 1; i++) {
            int pick = nums[i];
            if(i > 1) pick += dp[i - 2];

            int notpick = dp[i - 1];
            dp[i] = max(pick, notpick);
        }

        int ans1 = dp[n - 2];

        vector<int> dp1(n, -1);
        dp1[0] = nums[1];

        for(int i = 1; i < n - 1; i++) {
            int pick = nums[i + 1];
            if(i > 1) pick += dp1[i - 2];

            int notpick = dp1[i - 1];
            dp1[i] = max(pick, notpick);
        }

        int ans2 = dp1[n - 2];

        return max(ans1, ans2);
    }
};