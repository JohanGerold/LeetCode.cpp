class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col;

        int top = 0;
        int bottom = row - 1;
        int left = 0;
        int right = col - 1;

        int elements = 0;
        vector<int> answer;

        while (elements < total) {

            // TOP →
            for (int i = left; i <= right; i++) {
                answer.push_back(matrix[top][i]);
                elements++;
            }
            top++;

            if (elements == total) {
                break;
            }

            // RIGHT ↓
            for (int i = top; i <= bottom; i++) {
                answer.push_back(matrix[i][right]);
                elements++;
            }
            right--;

            if (elements == total) {
                break;
            }

            // BOTTOM ←
            for (int i = right; i >= left; i--) {
                answer.push_back(matrix[bottom][i]);
                elements++;
            }
            bottom--;

            if (elements == total) {
                break;
            }

            // LEFT ↑
            for (int i = bottom; i >= top; i--) {
                answer.push_back(matrix[i][left]);
                elements++;
            }
            left++;

            if (elements == total) {
                break;
            }
        }

        return answer;
    }
};