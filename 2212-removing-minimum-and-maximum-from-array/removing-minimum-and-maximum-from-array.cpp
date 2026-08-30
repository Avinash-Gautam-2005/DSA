class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        int minIndex = 0;
        int maxIndex = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == mini)
                minIndex = i;

            if(nums[i] == maxi)
                maxIndex = i;
        }

        if(minIndex > maxIndex)
            swap(minIndex, maxIndex);

        int front = maxIndex + 1;
        int back = n - minIndex;
        int both = (minIndex + 1) + (n - maxIndex);

        return min(front, min(back, both));
    }
};