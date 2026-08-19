class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int size = arr.size();

        int ansArr[size + 1];

        for(int i = 0; i < size + 1; i++){
            ansArr[i] = 0;

        }

        for(int i = 0; i < size; i++){
            int el = arr[i];
            ansArr[el]++;
        }

        for(int i = 0; i < size; i++){
            if(ansArr[i] > 1){
                return i;
            }
        }
        return 0;
    }
};