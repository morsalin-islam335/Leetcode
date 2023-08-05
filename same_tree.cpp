//program to check if 2 binary tree are same or not
//problem link: https://leetcode.com/problems/same-tree/

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if(p == NULL && q == NULL) return true;
       else if((p == NULL && q!= NULL) || (p != NULL && q == NULL)) return false;
       queue<TreeNode * > q1 , q2;
       q1.push(p);  q2.push(q);
       while(!q1.empty())
       {
           if(q1.front() -> val != q2.front() -> val) return false;
           if((q1.front() -> left && q2.front() -> left == NULL) || (q1.front() -> left == NULL && q2.front() -> left)) return false;

           if((q1.front() -> right && q2.front() -> right == NULL) || (q1.front() -> right == NULL && q2.front() -> right)) return false;
           
           if(q1.front() -> left)  q1.push(q1.front() -> left);
           if(q1.front() -> right)  q1.push(q1.front() -> right);
           q1.pop();

           if(q2.front() -> left)  q2.push(q2.front() -> left);
           if(q2.front() -> right)  q2.push(q2.front() -> right);
           q2.pop();

           if(!q1.empty() && q2.empty() || q1.empty()  && !q2.empty()) return false;
       }
       return true;
    }
};