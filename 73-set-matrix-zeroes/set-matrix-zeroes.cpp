class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();       // Number of rows
        int n = matrix[0].size();    // Number of columns
        
        vector<int> row(m, 0);       // Vector to mark rows
        vector<int> col(n, 0);       // Vector to mark columns
        
        // First pass to mark the rows and columns that need to be zeroed
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;  
                }
            }
        }

        // Second pass to set the zeroes
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};