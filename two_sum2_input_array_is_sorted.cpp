//program to return target index of array
//problem link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size=numbers.size();
        int j=size-1,i=0;
        vector<int>v;
        while(j>i)//first loop with 0 index tracking
        {
            if(numbers[i]+numbers[j]==target)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            else if(numbers[i]+numbers[j]>target)j--;
            else i++;
        }
        return v;
    }
};