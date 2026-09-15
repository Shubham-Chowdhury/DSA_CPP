class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int start = 0;
        int end = mat[0].size() - 1;
        cout << end;
        int count = 0;

        for (int i = 0; i <= end; i++) {
            count += mat[i][i];
        }

        if(end == 0){
            return count;
        }

        int i = 0;
        for (int j = end; j >= 0; j--) {
            if(i == j){
                i++;
                continue;
            }
            count += mat[i][j];
            i++;
        }

        return count;
    }
};