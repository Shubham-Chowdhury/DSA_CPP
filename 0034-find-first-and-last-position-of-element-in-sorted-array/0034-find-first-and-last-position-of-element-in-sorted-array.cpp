class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int size = arr.size();
        int start = 0;
        int end = size - 1;
        int first = -1;
        int last = -1;

        while(start <= end){
            int mid = (start + end) / 2;

            if(arr[mid] == target){
                first = mid;
                end = mid - 1;
            }
            else if(arr[mid] > target){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        start = 0;
        end = size - 1;

        while(start <= end){
            int mid = (start + end) / 2;

            if(arr[mid] == target){
                last = mid;
                start = mid + 1;
            }
            else if(arr[mid] < target){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return {first, last};

    }
};