//program to merge sorted array
//problem link: https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0)
        {
            nums1 = nums2;
            return;
        }
        
        // make a array which will contain 2 array's all value
        vector<int>full_vector;
        
        nums1.push_back(INT_MAX);
        nums2.push_back(INT_MAX);
        nums1[m] = INT_MAX;
        nums2[n]= INT_MAX;
        int nums1_index = 0, nums2_index = 0;

        for(int i = 0; i< n+m; i++)
        {
            if(nums1[nums1_index] < nums2[nums2_index])
            {
                full_vector.push_back(nums1[nums1_index]);
                nums1_index ++;
            }
            else 
            {
                full_vector.push_back(nums2[nums2_index]);
                nums2_index ++;
            }
        }

        // for(int i = 0; i< m; i++)
        // {
        //     nums1[i] = full_vector[i];
        // }
        
        // int a = 0;
        // for(int i  = m; i<n; i++)
        // {
        //     nums2[a] = full_vector[i];
        //     a++;
        // }
        // nums1.pop_back();
        // nums2.pop_back();

        nums1 = full_vector;

    }
};