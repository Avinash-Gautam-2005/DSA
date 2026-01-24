class Solution {
public:
    bool isSorted(vector<int>& arr){
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]) return false;
        }
         return true;
    }
   
    bool check(vector<int>& nums) {
        int drop=0;
        if(isSorted(nums)) return true;
        if(nums[0]<nums[nums.size()-1]) return false;
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i+1]<nums[i]){
                drop++;
            }

        }
        
        if(drop<=1) return true;
        else return false;
    }
};