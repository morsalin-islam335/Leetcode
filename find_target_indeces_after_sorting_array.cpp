//program for find target index after sorting array
//problem link: https://leetcode.com/problems/find-target-indices-after-sorting-array/

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
      vector<int>v;
        if(nums.size()== 0) return  v;

        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0; i < nums.size(); i++) pq.push(nums[i]);
        nums.clear();
        while(!pq.empty()){ nums.push_back(pq.top()); pq.pop();};
        //for(int i = 0; i< nums.size(); i++) {if(nums[i] == target) { v.push_back(i);}};
        for(int i = 0; i<  nums.size(); i++)
        {
            if(nums[i] == target) v.push_back(i);
        }

        return v;  
    }
};
