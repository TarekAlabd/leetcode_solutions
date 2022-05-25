class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) {
            return false;
        }
        long long int reversed_number=0, remainder, original = x;
        while(x!=0) {
            remainder = x%10;
            reversed_number=reversed_number*10 + remainder;
            x/=10;
        }
        return original==reversed_number;
    }
};