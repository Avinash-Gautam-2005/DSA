class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int sum = nums[0];
        int maxSum = sum;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]-1){
                sum+=nums[i];
            }
            else{
                break;
            }
            maxSum = max(maxSum , sum);
        }
        while(st.find(maxSum)!=st.end()){
            maxSum++;
        }
        return maxSum;
    }
};