//program to introduce about binary search
//problem link: https://leetcode.com/problems/binary-search/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) return -1;
        int low = 0, high = nums.size() -1;
        int mid;
        while(low <= high)
        {
            mid = (low + high) /2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};