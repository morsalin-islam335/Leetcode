//program to find out minimum absolute deference in a BST
//problem link: https://leetcode.com/problems/minimum-absolute-difference-in-bst/


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
    vector<int>v;
    void get_min(TreeNode * root)
    {
        if(root == NULL) return;//base case 
        get_min(root -> left);
        v.push_back(root -> val);
        get_min(root -> right);
    }
    int getMinimumDifference(TreeNode* root) {
      if(root == NULL) return 0;
      else if(root -> left == NULL && root -> right == NULL) return abs(root -> val);
      v.clear();
      get_min(root);
      int mn = INT_MAX;
      for(int i = v.size() -1; i>0; i--)
      {
          mn = min(mn,v[i] - v[i-1]);
      }
      return abs(mn);
    }
};