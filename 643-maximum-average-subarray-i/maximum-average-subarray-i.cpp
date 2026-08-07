class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum =0;
        double avg = -DBL_MAX;
        int i=0;
        int j=0;
        while(j<n){
            sum += nums[j];
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                double ans = (double)sum/k;
                avg = max(avg , ans);
                sum -= nums[i];
                i++;
                j++;
            }
        }
        return avg;
                
    }
};