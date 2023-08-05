//program for make left and light sum array by prefix-sum array
//problem link: https://leetcode.com/problems/left-and-right-sum-differences/


/*
process: creaate 2  prefix sum array
1 st  prefix sum array work first - (last -1)
2 nd prefix sum array work last to 1 index
than find out absoulate deference betwenn them and take another array name answer.
*/

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       vector<int>preSum1,preSum2,ans;
       //handling corner case
       if(nums.size() == 0) return ans;
       else if(nums.size() == 1)
       {
           ans.push_back(0);
           return ans;
       }

       preSum1.push_back(0);
       preSum2.push_back(0);

       preSum1.push_back(nums[0]);
       preSum2.push_back(nums[nums.size() -1]);//last value of nums array
       //now make prefix-sum1 array
       for(int i = 1; i < nums.size() -1; i++)
       {
           preSum1.push_back(nums[i] + preSum1.back());
       }
       //now make prefix-sum2 array
       for(int i = nums.size() -2; i > 0; i--)
       {
           preSum2.push_back(nums[i] + preSum2.back());
       }

       //now make ansewer vector
       int j = nums.size() -1;
       for(int i = 0; i< nums.size(); i++)
       {
           ans.push_back(abs(preSum1[i] - preSum2[j]));
           j--;
       }
       return ans;

    }
};