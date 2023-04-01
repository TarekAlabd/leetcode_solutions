class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0, top = 0;
        int right = matrix[0].size();
        int bottom = matrix.size();
        vector<int> result;
        while (left < right && top < bottom) {
            // from left to right
            for (int i=left; i<right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;
            
            // from top to bottom
            for (int i=top; i<bottom; i++) {
                result.push_back(matrix[i][right-1]);
            }
            right--;
            
            // from right to left
            if (top < bottom) {
                for (int i=right-1; i>=left; i--) {
                    result.push_back(matrix[bottom-1][i]);
                }
                bottom--;
            }
            
            // from bottom to top
            if (left < right) {
                for (int i=bottom-1; i>=top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};