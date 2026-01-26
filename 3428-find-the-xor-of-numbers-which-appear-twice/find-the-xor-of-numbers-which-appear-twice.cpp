#include<bits/stdc++.h>
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int> res;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto& it : mp){
            if(it.second==2){
                res.push_back(it.first);
            }
        }
        int XOR=0;
        for(int i=0;i<res.size();i++){
            XOR=XOR^res[i];
        }
        return XOR;
        
    }
};