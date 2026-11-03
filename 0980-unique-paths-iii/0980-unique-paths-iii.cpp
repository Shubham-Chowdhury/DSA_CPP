class Solution {
public:
    int solve(vector<vector<int>>& arr, int r, int c, int z){
        int n = arr.size();
        int m = arr[0].size();

        if(r < 0 || r >= n || c < 0 || c >= m || arr[r][c] == -1){
            return 0;
        }

        if(arr[r][c] == 2){
            if(z == 1){
                return 1;
            }
            else{
                return 0;
            }
        }

        int t = arr[r][c];
        arr[r][c] = -1;
        int ans = 0;

        ans += solve(arr, r - 1, c, z - 1);
        ans += solve(arr, r + 1, c, z - 1);
        ans += solve(arr, r, c + 1, z - 1);
        ans += solve(arr, r, c - 1, z - 1);

        arr[r][c] = t;

        return ans;
    }

    int uniquePathsIII(vector<vector<int>>& arr) {
        int si, sj, c;
        for(int i = 0; i < arr.size(); i++){
            for(int j = 0; j < arr[0].size(); j++){
                if(arr[i][j] == 1){
                    si = i;
                    sj = j;
                }

                if(arr[i][j] != -1){
                    c++;
                }
            }
        }

        return solve(arr, si, sj, c);
    }
};