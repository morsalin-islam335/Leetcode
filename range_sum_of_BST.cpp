//program to return range sum of BST
//problem link: https://leetcode.com/problems/range-sum-of-bst/

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
    void inorderTraversal(TreeNode * root, int low, int high, int * sum)
    {
        if(root == NULL) return;
        inorderTraversal(root ->left, low, high, sum);
        if(root -> val >= low && root -> val <= high) *sum += root -> val;
        inorderTraversal(root -> right, low, high, sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL) return 0;
        int sum = 0;
        inorderTraversal(root, low, high, &sum);
        return sum;

    }
};