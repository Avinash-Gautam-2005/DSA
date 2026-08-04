class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int maxi = nums[n-1];
        int i=0;
        int j=mini;
        while(i<n){
            if(nums[i]==j){
                i++;
                j++;
            }
            else{
                ans.push_back(j);
                j++;
            }
        }
        return ans;
    }
};