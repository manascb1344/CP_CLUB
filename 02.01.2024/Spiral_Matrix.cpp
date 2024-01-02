// https://leetcode.com/problems/spiral-matrix/

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        int left = 0;
        int right = m - 1;
        int top = 0;
        int bottom = n - 1;
        vector<int> ans;
        while (top <= bottom && left <= right)
        {
            if (ans.size() == (m * n))
            {
                break;
            }
            // right
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            if (ans.size() == (m * n))
            {
                break;
            }
            // down
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if (ans.size() == (m * n))
            {
                break;
            }
            // left
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            if (ans.size() == (m * n))
            {
                break;
            }
            // up
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};