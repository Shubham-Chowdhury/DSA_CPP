class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int size = arr.size();

        sort(arr.begin(), arr.end());

        int start = 0;
        int end = 1;

        while (end < size){
            if(arr[start] == arr[end]){
                return true;
            }
            start++;
            end++;
        }

        return false;

        
    }
};