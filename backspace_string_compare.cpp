//program to check if two string are same or not after removing from some charecter with backspace
//problem link:  https://leetcode.com/problems/backspace-string-compare

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>a,b;
        for(int i = 0; i < s.size(); i++)
        {
            if(!a.empty()&&s[i]=='#')
            {
                a.pop();
            }
            else if(s[i]!='#')
            {
                a.push(s[i]);
            }
        }

        for(int i = 0; i< t.size(); i++)
        {
            if(!b.empty()&&t[i]=='#')
            {
                b.pop();
            }
            else if(t[i]!='#')
            {
                b.push(t[i]);
            }
        }
        cout<<"a size :"<<a.size()<<" b size is :"<<b.size()<<endl;
        if(a.size()!=b.size())
        {
            return false;
        }
        else
        {
            while(!a.empty())
            {   
                cout<<a.top()<<" "<<b.top()<<endl;
                if(a.top()!=b.top())return false;
                a.pop();
                b.pop();
            }
            return true;
        }
        return true;//this line will not exicute.
    }
};