class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        vector<int> res;
        int smaller = 0;
        int occ = 0;
        int size = arr.size();

        for(int i = 0; i < size; i++){
            if(arr[i] == target) occ++;
            else if(arr[i] < target) smaller ++;
        }

        for(int i = smaller; i < smaller + occ; i++){
            res.push_back(i);
        }

        return res;
    }
};