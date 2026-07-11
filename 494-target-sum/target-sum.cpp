class Solution {
public:
    int f(int idx, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (idx == 0) {
            if (target == 0 && nums[0] == 0) return 2;
            if (target == 0 || nums[0] == target) return 1;
            return 0;
        }

        if (dp[idx][target] != -1) return dp[idx][target];

        int notTake = f(idx - 1, target, nums, dp);

        int take = 0;
        if (nums[idx] <= target)
            take = f(idx - 1, target - nums[idx], nums, dp);

        return dp[idx][target] = take + notTake;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();

        int totalSum = 0;
        for (int x : nums)
            totalSum += x;

        if (abs(target) > totalSum) return 0;

        if ((totalSum - target) % 2 != 0) return 0;

        int target2 = (totalSum - target) / 2;

        vector<vector<int>> dp(n, vector<int>(target2 + 1, -1));

        return f(n - 1, target2, nums, dp);
    }
};