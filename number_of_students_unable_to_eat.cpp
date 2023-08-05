//problem link: https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        if(students.size() == 0) return  0;
        queue<int>sand,st;
        for(int i = 0; i< students.size(); i++)
        {
            sand.push(sandwiches[i]);
            st.push(students[i]);
        }
        int counter = 0;
        int n ;
        while(!sand.empty())
        {
            n = st.front();
            st.pop();
            if(sand.front() == n)
            {
                sand.pop();
                counter = 0;
            }
            else
            {
                st.push(n);
                counter ++;

            }

            if(counter == st.size()) break;
        }
        return sand.size();
    }
};