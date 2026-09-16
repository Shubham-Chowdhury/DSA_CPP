class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        int max = INT_MIN;
        for(int i = 0; i < size; i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }

        int freq[max + 1];

        for(int i = 0; i < max + 1; i++){
            freq[i] = 0;
        }

        for(int i = 0; i < size; i++){
            int el = nums[i];
            freq[el]++;
        }

        for(int i = 0; i < max + 1; i++){
            cout << freq[i] << " ";
        }

        for(int i = 1; i < max + 1; i++){
            if(freq[i] > 1){
                ans.push_back(i);
            }
        }

        return ans;
    }
};