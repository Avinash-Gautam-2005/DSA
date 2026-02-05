class Solution {
public:
    int first(vector<int>& nums, int target){
        int n= nums.size();
        int low=0;
        int high=n-1;
        int ans1=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]== target){
                ans1=mid;
                high=mid-1;
            }
            else if (nums[mid]> target){
                high= mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans1;
    }
    int second(vector<int>& nums, int target){
        int n= nums.size();
        int low=0;
        int high=n-1;
        int ans2=-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]== target){
                ans2=mid;
                low=mid+1;
            }
            else if (nums[mid]> target){
                high= mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans2;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=first(nums,target);
        int end= second(nums,target);
        return {start,end};
        
    }
};