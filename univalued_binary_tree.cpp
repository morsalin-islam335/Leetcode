//program to check if a binary tree contains same value or not
//problem link: https://leetcode.com/problems/univalued-binary-tree/


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
    bool isUnivalTree(TreeNode* root) {
       if(root == NULL) return true;
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty())
       {
           TreeNode * front = q.front();
           q.pop();
           if(front -> left)
           {
               if(front -> left -> val != front -> val) return false;
               else q.push(front -> left);
           }
           if(front -> right)
           {
               if(front -> right -> val != front -> val) return false;
               else q.push(front -> right);
           }
       }
       return true;

    }
};