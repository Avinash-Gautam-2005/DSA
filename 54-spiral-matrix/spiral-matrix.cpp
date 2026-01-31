class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n= mat.size();
        int m= mat[0].size();
        vector<int> res;
        int cnt=0;
        int total = n*m;
        // four pointers
        int left=0;
        int top=0;
        int right=m-1;
        int bottom = n-1;
        while(cnt<total){
            for(int i=left;cnt<total && i<=right;i++){
                res.push_back(mat[top][i]);
                cnt++;
            }
            top++;
            for(int i=top; cnt<total && i<=bottom;i++){
                res.push_back(mat[i][right]);
                cnt++;
            }
            right--;
            for(int i=right; cnt<total &&  i>=left;i--){
                res.push_back(mat[bottom][i]);
                cnt++;
            }
            bottom--;
            for(int i=bottom  ; cnt<total && i>=top ;i--){
                res.push_back(mat[i][left]);
                cnt++;
            }
            left++;

        }
        return res;
        
    }
};