//problem link: https://leetcode.com/problems/baseball-game/

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] != "C" && operations[i] != "D" && operations[i] != "+") {
                v.push_back(stoi(operations[i]));
            } 
            else if (operations[i] == "C") {
                if (!v.empty()) v.pop_back();
            }
            else if (operations[i] == "D") {
                if (!v.empty()) v.push_back(v.back() * 2);
                else v.push_back(0);
            }
            else if (operations[i] == "+") {
                if (v.empty()) v.push_back(0);
                else if (v.size() == 1) v.push_back(v.back());
                else v.push_back(v[v.size() - 1] + v[v.size() - 2]);
            }
        }

        int sum = 0;
        for (int i = 0; i < v.size(); i++) sum += v[i];
        return sum;
    }
};
