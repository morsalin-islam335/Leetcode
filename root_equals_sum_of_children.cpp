//program to check if root node value is same of child node sum value or not
//problem link: https://leetcode.com/problems/root-equals-sum-of-children/

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
    bool checkTree(TreeNode* root) {
        if(root -> left == NULL && root -> right == NULL) return false;
        else if (root -> left == NULL) return root -> val == root -> right -> val;
        else if(root -> right == NULL) return root -> val == root -> right -> val;
        else return root -> val == root -> left -> val + root -> right -> val;
    }
};