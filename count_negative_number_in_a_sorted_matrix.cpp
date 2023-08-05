//program to count negative number in a sorted matrix
//problem link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0, j;
        for(int i = 0; i< grid.size(); i++)
        {
            j = grid[0].size() - 1;
            while( j>= 0 && grid[i][j] < 0)
            {
                ans ++;
                j--;
            }
        }
        return ans;
    }
};