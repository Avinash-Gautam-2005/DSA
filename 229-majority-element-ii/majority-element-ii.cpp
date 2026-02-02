class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n= nums.size();
        int cnt1=0;
        int cnt2=0;
        int maj1=0;
        int maj2=0;
        for(int i=0;i<n;i++){
            if(cnt1==0 && maj2 != nums[i]){
                cnt1=1;
                maj1=nums[i];
            }
            else if(cnt2==0 && maj1 != nums[i]){
                cnt2=1;
                maj2=nums[i];
            }
            else if(maj1==nums[i]){
                cnt1++;
            }
            else if(maj2==nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }

        }
        int cnt3=0;
        int cnt4=0;
        vector<int> res;
        for(int i=0;i<n;i++){
            if(nums[i]==maj1){
                cnt3++;
            }
            else if(nums[i]==maj2){
                cnt4++;
            }

        }
        if(cnt3 > n/3){
            res.push_back(maj1);
            
        }
        if(cnt4>n/3){
            res.push_back(maj2);
        }
        return res;

        
    }
};