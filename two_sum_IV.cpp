//program to check if 2 elements present in a binary tree which sum is equal to target value
//problem link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode * root, vector<int>&v)
    {
        if(root == NULL)  return;
        v.push_back(root -> val);
        preorder(root -> left, v);
        preorder(root -> right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        preorder(root, v);
        sort(v.begin(),v.end());
        int i = 0, j = v.size() -1;
        while(i<j)
        {
            if(v[i] + v[j] == k) return true;
            if(v[i] + v[j] > k) j--;
            else i++;
        }
        return false;
    }
};