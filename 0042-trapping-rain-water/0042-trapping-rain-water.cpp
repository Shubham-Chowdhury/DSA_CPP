class Solution {
public:
    int trap(vector<int>& arr) {
        int size = arr.size();
        int left = 1;
        int right = size - 2;
        int leftMax = arr[0];
        int rightMax = arr[size - 1];
        int water = 0;

        while(left <= right){
            if(rightMax >= leftMax){
                if(arr[left] > leftMax){
                    leftMax = arr[left];
                }
                else{
                    water += leftMax - arr[left];
                }
                left++;
            }
            else{
                if(arr[right] > rightMax){
                    rightMax = arr[right];
                }
                else{
                    water += rightMax - arr[right];
                }
                right--;
            }
        }

        return water;
    }
};