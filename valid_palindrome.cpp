//program for detect if a string is valid palindrome or not
//problem link: https://leetcode.com/problems/valid-palindrome

class Solution {
public:
    bool isPalindrome(string s) {

        stack<char>st;
        queue<char>q;
        for(int i = 0; i< s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') 
            {
                st.push(s[i]);
                q.push(s[i]);
            }
            else if(s[i] >= 'A' &&  s[i] <= 'Z')
            {
                st.push(s[i] + 32);
                q.push(s[i] + 32);
            }
            else if(s[i] >= '0' && s[i] <= '9')
            {
                st.push(s[i]);
                q.push(s[i]);
            }
        }
        if(st.size()  == 1 || st.size() == 0) return true;
        while(!st.empty())
        {
            cout<< q.front()<<" ";
            if(q.front() != st.top()) return false;
            st.pop(); q.pop();
        }
        return true;
    }
};
