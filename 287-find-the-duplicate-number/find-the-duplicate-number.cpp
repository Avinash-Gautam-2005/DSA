class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0;
        int high=1;
        while(high<n || low<n){
            if(nums[low]==nums[high]){
                return nums[low];
            }
            low+=1;
            high+=1;
        }
        return -1;
        
    }
};