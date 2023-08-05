//problem link: https://leetcode.com/problems/make-the-string-great/

class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(int i = 0; i<s.size(); i++) 
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top() == s[i] + 32 || st.top() == s[i] - 32) st.pop();
            else st.push(s[i]);
        }
        string ss= "";
        if(st.empty()) return ss;
        else 
        {
            while(!st.empty())
            {
                ss += st.top();
                st.pop();
            }
            reverse(ss.begin(), ss.end());
            return ss;
        }    
    }
};