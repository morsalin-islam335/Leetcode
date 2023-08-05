//program to return binary tree tilt
//problem link: https://leetcode.com/problems/binary-tree-tilt/

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
    int tilt = 0;
    int findOutTilt(TreeNode * root)
    {
        if(root == NULL) return 0;  //base case
        int left = findOutTilt(root -> left);
        int right = findOutTilt(root -> right);
        tilt += abs(left - right);
        return left + right +root -> val;
    }
    int findTilt(TreeNode * root)
    {
        tilt = 0;
        if(root == NULL || root -> left == NULL && root -> right == NULL) return tilt;
        findOutTilt(root);
        return tilt;
    }
    

};