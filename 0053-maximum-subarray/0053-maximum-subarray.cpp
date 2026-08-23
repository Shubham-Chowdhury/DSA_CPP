class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int size = arr.size();
        int maxSum = INT_MIN;
        int curSum = 0;

        for(int i = 0; i < size; i++){
            curSum += arr[i];
            maxSum = max(curSum, maxSum);

            if(curSum < 0) curSum = 0;
        }

        return maxSum;
    }

    
};