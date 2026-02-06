class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Fix 1: Initialize mid with size 2 to avoid null pointer reference
        vector<int> l = {0, 0};
        vector<int> h = {m - 1, n - 1};
        vector<int> mid(2); 

        while (cmp(l, h)) {
            // Fix 2: Calculate mid based on total "flat" index to ensure mid is always valid
            int lowTotal = l[0] * n + l[1];
            int highTotal = h[0] * n + h[1];
            int midTotal = lowTotal + (highTotal - lowTotal) / 2;
            
            mid[0] = midTotal / n;
            mid[1] = midTotal % n;

            if (matrix[mid[0]][mid[1]] == target) {
                return true;
            } else if (matrix[mid[0]][mid[1]] > target) {
                // Fix 3: Proper coordinate decrementing
                h[0] = (midTotal - 1) / n;
                h[1] = (midTotal - 1) % n;
            } else {
                // Fix 4: Proper coordinate incrementing
                l[0] = (midTotal + 1) / n;
                l[1] = (midTotal + 1) % n;
            }
        }

        return false;
    }

    // Fix 5: Refined comparison to check if the 'low' coordinate has passed 'high'
    bool cmp(vector<int>& l, vector<int>& h) {
        if (l[0] < h[0]) return true;
        if (l[0] == h[0] && l[1] <= h[1]) return true;
        return false;
    }
};