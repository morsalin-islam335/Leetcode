//program to find out missing number from an array
//problem link: https://leetcode.com/problems/missing-number/


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0; i<nums.size(); i++) pq.push(nums[i]);

        nums.clear();

        while(!pq.empty()){nums.push_back(pq.top()); pq.pop();};
        if(nums[nums.size() - 1] <nums.size()) return nums.size();
        for(int i = 0; i < nums.size() -1 ; i++)
        {
            if(nums[i] +1 < nums[i+1]) return nums[i] + 1;
        }
        for(int val: nums) cout<<val<<" ";
        return 0;
        
    }
};