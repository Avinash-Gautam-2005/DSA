class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        if(k==n){
            return *max_element(nums.begin(),nums.end());
        }
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int maxi = INT_MIN;
        if(k==1){
            for(auto& it:mpp){
                if(it.second ==1){
                    maxi = max(maxi,it.first);
                }
            }
        }
        else{
            if(mpp[nums[0]]==1){
                maxi = max(maxi,nums[0]);
            }
            if(mpp[nums[n-1]]==1){
                maxi = max(maxi,nums[n-1]);
            }
        }
        return maxi == INT_MIN ? -1 : maxi ;
    }
};