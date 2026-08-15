class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < arr.size(); i++) {

            
            int test = target - arr[i];

            
            auto it = mp.find(test);

            if (it != mp.end()) {
                return {it->second, i};
            }

            
            mp[arr[i]] = i;
        }

        
        return {};
    }
};