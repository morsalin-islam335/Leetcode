//program to convert sorted array to BST
//problem link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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
    // void printlevelorder(TreeNode * root)
    // {
    //     queue<TreeNode*>q;
    //     q.push(root);
    //     while(!q.empty())
    //     {
    //         TreeNode * front = q.front();
    //         q.pop();
    //         cout<<front -> val<<" ";
    //         if(front -> left) q.push(front -> left);
    //         if(front -> right) q.push(front -> right);
    //     }
    // }
    
   
    // TreeNode* insertInBST(int left, int right, vector<int>vect)
    // {
    //     if(left > right) return NULL;
    //     int mid = left + right /2;
    //     TreeNode * root = new TreeNode (vect[mid]);

    //     TreeNode * lft = insertInBST(left, mid - 1, vect);
    //     TreeNode * rht = insertInBST(mid + 1, right, vect);
    //     root -> left = lft;
    //     root -> right = rht;
    //     return root;
    // }
    TreeNode * createBST_fromArray(int left, int right, vector<int>vect)
{
    if(left > right) return NULL;//base case
    int mid = (left + right) /2;
    TreeNode * root = new TreeNode(vect[mid]);
    TreeNode * leftNode = createBST_fromArray(left, mid-1, vect);
    TreeNode * rightNode= createBST_fromArray(mid+1, right, vect);
    root -> left = leftNode;
    root -> right = rightNode;
    return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      if(nums.size() == 0) return NULL;
      TreeNode * root = createBST_fromArray(0, nums.size() -1, nums);
      return root;
    }
};