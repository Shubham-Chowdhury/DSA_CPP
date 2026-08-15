class Solution {
public:
    bool isPalindrome(int x) {
        long int a = x;
        long int rev = 0;
        while(a){
            if(a < 0){
                return false;
                break;
            }
            else{
                rev = rev * 10 + a % 10;
                a /= 10;
            }
        }
        if(rev == x)return true;
        else return false;
    }
};