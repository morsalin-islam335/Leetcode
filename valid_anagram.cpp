//program to determine if 2 string are same or not by anagram
//problem link: https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       return s==t;
    }
};