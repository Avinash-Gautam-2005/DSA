class Solution {
public:
    bool BS(vector<int>& arr, int target){
        int low=0, high=arr.size()-1;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(arr[mid]== target) return true;
            else if(arr[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;

        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0;i<n;i++){
            if(matrix[i][0] <= target && matrix[i][m-1] >= target){
                if (BS(matrix[i],target)== true){
                    return true;
                }
                else {
                    continue;
                }
            }
        }
        return false;
    }
};
