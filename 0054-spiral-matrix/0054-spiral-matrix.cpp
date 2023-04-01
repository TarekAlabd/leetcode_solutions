class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, left = 0;
        int bottom = matrix.size();
        int right = matrix[0].size();
        vector<int> result;

        while(top < bottom && left < right) {
            for(int i = left; i < right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top; i < bottom; i++) {
                result.push_back(matrix[i][right - 1]);
            }
            right--;

            if(top < bottom) {
                for(int i = right - 1; i >= left; i--) {
                    result.push_back(matrix[bottom - 1][i]);
                }
                bottom--;
            }

            if(left < right) {
                for(int i = bottom - 1; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
};