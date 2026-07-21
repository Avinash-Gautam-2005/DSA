class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        int low =0;
        int high = n-1;
        while(low<high){
            int sum = nums[low]+nums[high];
            if(sum==target){
                res.push_back(low+1);
                res.push_back(high+1);
                break;
            }
            else if(sum>target){
                high--;
            }
            else{
                low++;
            }
        }
        return res;
        
    }
};