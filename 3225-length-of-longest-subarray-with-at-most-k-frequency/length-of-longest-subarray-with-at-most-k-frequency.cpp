class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0;
        unordered_map<int,int>mpp;
        int start=0;
        for(int j=0;j<n;j++){
            mpp[nums[j]]++;
            while(mpp[nums[j]]>k){
                mpp[nums[start]]--;
                start++;
            }
            maxlen = max(maxlen , j-start+1);
        }
        return maxlen;
    }
};