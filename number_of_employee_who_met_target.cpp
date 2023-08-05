// program for find out number of employee 
//problem link: https://leetcode.com/problems/number-of-employees-who-met-the-target/

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int empoloyee = 0;
        for(int i = 0; i< hours.size(); i++)
        {
            if(hours[i] >= target) empoloyee ++;
        }
        return empoloyee;
        
    }
};