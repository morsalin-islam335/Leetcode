//program to find pivot index
//problem link: https://leetcode.com/problems/find-pivot-index/


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int sum = 0;
       for(int i = 0; i<nums.size(); i++) sum += nums[i];
       int leftSum = 0, rightSum;
       for(int i = 0; i<  nums.size(); i++)
       {
           rightSum = sum - (leftSum + nums[i]);
           if(leftSum == rightSum) return i;
           leftSum += nums[i];
       }
        
        return -1;
    }
};