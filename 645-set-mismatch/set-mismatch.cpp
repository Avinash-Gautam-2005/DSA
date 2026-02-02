class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();

        long long s1 = n * (n + 1) / 2;
        long long s2 = 0;
        for (int i = 0; i < n; i++) {
            s2 += nums[i];
        }

        long long s1n = n * (n + 1) * (2 * n + 1) / 6;
        long long s2n = 0;
        for (int i = 0; i < n; i++) {
            s2n += 1LL * nums[i] * nums[i];   
        }

        long long val1 = s1 - s2;        // x - y
        long long val2 = s1n - s2n;      // x^2 - y^2
        val2 = val2 / val1;              // x + y

        long long x = (val1 + val2) / 2; // duplicate
        long long y = x - val1;          // missing

        return {(int)y, (int)x};
    }
};
