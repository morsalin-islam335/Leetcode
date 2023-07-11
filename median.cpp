//program to find out median from 2 array
//problem link: https://leetcode.com/problems/median-of-two-sorted-arrays


class Solution {
public:
   
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v2;
        v2=nums1;
        v2.insert(v2.end(),nums2.begin(),nums2.end());
        sort(v2.begin(),v2.end());
        double median;
        if(v2.size()%2!=0)
        {
            median=(double)v2[v2.size()/2];
        }
        else{
            median=(double)v2[(v2.size()/2)-1]+(double)v2[v2.size()/2];
            median/=2;
        }
        return median;
    }
};