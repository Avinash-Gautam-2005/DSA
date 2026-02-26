class Solution {
public:
   int  ispossible(vector<int>& nums, int sum){
    int partitions = 1; // at least one partition
        long subarraySum = 0; // sum of current subarray

        for (int num : nums) {
            if (subarraySum + num <= sum) {
                subarraySum += num;
            } else {
                partitions++;
                subarraySum = num;
            }
        }
        return partitions;             
   }


    
    int splitArray(vector<int>& nums, int k) {
        int n= nums.size();
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        int res=0;
        while(low<=high){
            int mid = low+(high-low)/2;
            int cntstd = ispossible(nums,mid);
            if(cntstd > k){
                low=mid+1;

            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};