//program for search in a BST
//problem link : https://leetcode.com/problems/search-in-a-binary-search-tree/

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        TreeNode * current = root,*parrent;
        while(current != NULL)
        {
            parrent = current;
            if(parrent -> val == val) return parrent;
            if(val > parrent -> val) current = parrent -> right;
            else current = parrent -> left;
        }
        return NULL;
    }
};