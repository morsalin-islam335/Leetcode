//program to reverse a integer
//problem link: https://leetcode.com/problems/reverse-integer/



class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x != 0) {
            int digit = x % 10;
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                return 0; // Overflow condition for positive numbers
            }
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) {
                return 0; // Overflow condition for negative numbers
            }
            result = result * 10 + digit;
            x /= 10;
        }
        return result;
    }
};
