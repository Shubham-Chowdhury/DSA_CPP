class Solution {
public:
    void solve(vector<int> &curr, vector<int> &arr, vector<vector<int>> &ans, int i){
        if(i == arr.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(arr[i]);
        solve(curr, arr, ans, i + 1);

        curr.pop_back();
        solve(curr, arr, ans, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(curr, arr, ans, 0);
        return ans;
    }
};