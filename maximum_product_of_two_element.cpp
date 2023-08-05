//program to access maximum 2 value of an array
//problem link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
       if(nums.size() == 0) return 0;
       else if(nums.size() == 1) return (nums[0] -1) * (nums[0]-1);
       int firstLargest = INT_MIN, secondLargest = INT_MIN;
        int track = 0;//first index
        for(int i = 0; i< nums.size(); i++)
        {
           if(nums[i]>firstLargest) 
           {
               firstLargest = nums[i];
               track = i;
           }
            
        }
        for(int i= 0; i< nums.size(); i++)
        {
            if(nums[i]> secondLargest && i != track ) secondLargest = nums[i];
        }
        cout<<firstLargest<<" "<<secondLargest;
        return (firstLargest-1)*(secondLargest -1);
    }
};