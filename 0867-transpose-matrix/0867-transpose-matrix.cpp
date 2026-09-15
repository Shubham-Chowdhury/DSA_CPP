class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<int>> result(cols, vector<int>(rows));
        
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[j][i] = mat[i][j];
            }
        }
        
        return result;
    }
};