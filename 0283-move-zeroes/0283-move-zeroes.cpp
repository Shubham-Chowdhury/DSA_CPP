class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int zero = 0;
        int nonZero = 0;
        for(zero; zero < size; zero++){
            if(nums[zero] != 0){
                swap(nums[zero], nums[nonZero]);
                nonZero++;
            }
        }
    }
};