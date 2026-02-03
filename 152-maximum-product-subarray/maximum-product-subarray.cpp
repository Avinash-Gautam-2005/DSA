class Solution {
public:
    int maxProduct(vector<int>& nums) {
    // Write your code here.
	// using prefix , suffix approach .
	// we have to deal with 
	// 1. all are positive.
	// 2 . even  are negative and it is fine .
	// 3 . odd are negative . in this case we use prefix ,suffix.
	// 4 if zero is  present then start form new.
    int n= nums.size();
    int prefix=0;
    int suffix=0;
    int maxi=nums[0];
    for(int i=0;i<n;i++){
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix*=nums[i];
        suffix*=nums[n-i-1];
        maxi=max(maxi,max(prefix,suffix));
    }
    return maxi;

	

    }
};