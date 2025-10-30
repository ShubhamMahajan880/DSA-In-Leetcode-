class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int i = 0, j = m - 1; // Start from top-right corner

        while (i < n && j >= 0) {
            if (matrix[i][j] == target) {
                return true;
            }
            else if (matrix[i][j] > target) {
                j--; // Move left
            }
            else {
                i++; // Move down
            }
        }

        return false; // Not found
    }
};
