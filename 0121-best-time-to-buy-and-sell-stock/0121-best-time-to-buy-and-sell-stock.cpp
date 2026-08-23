class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int size = arr.size();
        int buyArr[size];
        buyArr[0] = INT_MAX;

        for(int i = 1; i < size; i++){
            buyArr[i] = min(buyArr[i - 1], arr[i - 1]);

        } 

        int maxProfit = 0;
        for(int i = 0; i < size; i++){
            int curProfit = arr[i] - buyArr[i];
            maxProfit = max(curProfit, maxProfit);
        }

        if(maxProfit ){
            return maxProfit;
        }
        else{
            return 0;
        }
        
    }
};