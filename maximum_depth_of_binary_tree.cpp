//program to find out maximum depth of binary tree
//problem link: https://leetcode.com/problems/maximum-depth-of-binary-tree/

class Solution {
public:
    int preorder(TreeNode *root)
    {
        {
            if(root == NULL) return 0;//base case
        }
        int left  = preorder(root -> left);
        int right = preorder(root -> right);
        return max(left,right) + 1;
    }
    int maxDepth(TreeNode* root) {
        int depth = preorder(root);
        return depth;

        
    }
};