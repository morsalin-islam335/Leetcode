//program to sort an array
//problem link: https://leetcode.com/problems/sort-an-array

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       priority_queue<int, vector<int>,greater<int>>pq;
       for(int i = 0; i<nums.size(); i++)
       {
           pq.push(nums[i]);
       }
       nums.clear();
       while(!pq.empty())
       {
           nums.push_back(pq.top());
           pq.pop();
       }
       return nums;
    }
};