//program to count maximum count between positive and negative integer
//problem link: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/


class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int possative = 0, negative = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] >0) possative ++;
            else if(nums[i] <0) negative ++;
        }
        return max(possative,  negative);
    }
};