class Solution {
public:
    int findGcd(int n1, int n2) {
        if (n2 == 0)
            return n1;
        return findGcd(n2, n1 % n2);
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefixGcd;

        int maxi = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi,nums[i]);
            int mxi = maxi;
            mxi = findGcd(mxi, nums[i]);
            prefixGcd.push_back(mxi);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        int i = 0;
        int j = prefixGcd.size() - 1;
        long long sum = 0;

        while (i < j) {
            sum += findGcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }

        return sum;
    }
};