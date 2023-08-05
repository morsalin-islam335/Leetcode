//program to access first unique character of a string
//problem link: https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size() == 0) return -1;
        map<char,int>mp;
        for(int i= 0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        for(int i = 0; i<s.size(); i++)
        {
            if(mp[s[i]] == 1) return i;
        }
        return -1;
    }
};