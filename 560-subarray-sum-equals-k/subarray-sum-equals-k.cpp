class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int ,int>mpp; // sum , cnt
        int sum =0;
        mpp[0]=1;
        int cnt=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int r = sum-k;
            if(mpp.find(r)!=mpp.end()){
                cnt+=mpp[r];
                
            }
            mpp[sum]++;
        }
       return cnt; 
    }
};