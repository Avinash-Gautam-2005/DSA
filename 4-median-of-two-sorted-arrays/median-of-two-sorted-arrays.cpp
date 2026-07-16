class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int a=0;
        int b =0;
        vector<int> res;
        while(a<n && b<m){
            if(nums1[a]<=nums2[b]){
                res.push_back(nums1[a]);
                a++;
            }
            else{
                res.push_back(nums2[b]);
                b++;
            }

        }
        while(a<n){
            res.push_back(nums1[a]);
            a++;
        }

        while(b<m){
            res.push_back(nums2[b]);
            b++;
        }
        if(res.size()%2==0){
            int mid = res.size()/2;
            return double(res[mid]+res[mid-1])/2;
        }
        int mid = res.size()/2;
        return double(res[mid]);
        
    }
};