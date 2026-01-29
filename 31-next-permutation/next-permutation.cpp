class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // next_permutation(nums.begin(),nums.end());

        // Algorithm.

        // Step1 : find the break point index (start iteration from n-1 to 0 if at any index arr[i]<arr[i+1 mark it idx] and then break;)

        // Step2 : swap the idx element with just next greater element.(iterate from n-1 to idx break)
        // Step3 : reverse the array from idx+1 to end.

        // edge case if still idx==-1 just reverse the whole array

        int n= nums.size();
        int idx=-1;
        // Step1
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        // edge case
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        // Step2 :
        for(int i=n-1;i>=idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        // Step3 : 
        reverse(nums.begin()+idx+1,nums.end()); 
    }
};