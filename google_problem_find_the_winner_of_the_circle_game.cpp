//program to find the winner of the circle game
//problem link:  https://leetcode.com/problems/find-the-winner-of-the-circular-game

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>a;
        for(int i = 1; i<= n; i++)
        {
            a.push(i);
        }
        int tmp = k;
        int top;
        while(a.size()>1)
        {
            top = a.front();
            a.pop();
            tmp--;
            if(tmp!=0)
            {
                a.push(top);
            }
            else tmp = k;
        }
        return a.front();
    }
};