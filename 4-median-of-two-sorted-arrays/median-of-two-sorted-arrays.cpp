class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int a=0;
        int b=0;
        while(a<nums1.size() && b < nums2.size()){
            if(nums1[a] <=  nums2[b]){
                res.push_back(nums1[a]);
                a++;
            }
            else{
                res.push_back(nums2[b]);
                b++;
            }

        }
        while(a<nums1.size()){
            res.push_back(nums1[a]);
            a++;
        }
        while(b<nums2.size()){
            res.push_back(nums2[b]);
            b++;
        }
        int n= res.size();
        if(n%2==0){
             return  (double(res[n/2-1])+double(res[n/2]))/2;

        }
        return double(res[n/2]);
    }
};