class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> res;
        vector<int> less;
        vector<int> more;
        vector<int> equal;
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                less.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                more.push_back(nums[i]);
            }
            else{
                equal.push_back(nums[i]);
            }
        }
        for(int i=0;i<less.size();i++){
            res.push_back(less[i]);
        }
        for(int i=0;i<equal.size();i++){
            res.push_back(equal[i]);
        }
        for(int i=0;i<more.size();i++){
            res.push_back(more[i]);
        }
        return res;

        
    }
};