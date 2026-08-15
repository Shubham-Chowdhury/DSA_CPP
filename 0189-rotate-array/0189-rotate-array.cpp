class Solution {
public:
    void rotate(vector<int>& arr, int x) {
    int size = arr.size();
    int k = x % size;

    int start = 0;
    int end = size - 1;
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    int start1 = 0;
    int end1 = k - 1; 
    while(start1 <= end1){
        int temp = arr[start1];
        arr[start1] = arr[end1];
        arr[end1] = temp;
        start1++;
        end1--;
    }

    int start2 = k;
    int end2 = size - 1;
    while(start2 <= end2){
        int temp = arr[start2];
        arr[start2] = arr[end2];
        arr[end2] = temp;
        start2++;
        end2--;
    }
    }
};