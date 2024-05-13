
// problem link:  https://leetcode.com/problems/convert-the-temperature/submissions/1257081409/


class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double farenheight = (celsius * 1.80) + 32.00;
        vector<double>ans;
        ans.push_back(kelvin);
        ans.push_back(farenheight);

        return ans;
    }
};