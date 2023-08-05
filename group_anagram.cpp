//program for create group anagram
//problem link: https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     map<string,vector<string>>mp;
     for(string s:strs)
     {
         string test = s;
         sort(test.begin(), test.end());
         mp[test].push_back(s);
     }
     vector<vector<string>>ansVector;
     for(auto it = mp.begin(); it != mp.end(); it++)
     {
         ansVector.push_back(it -> second);
     }
     return ansVector;

    }
};