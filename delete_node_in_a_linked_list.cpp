//program to delete node in a linked list
//problem link: https://leetcode.com/problems/delete-node-in-a-linked-list/

//program to delete node from a linked list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
class Solution {
public:
    void deleteNode(ListNode* node) {
       ListNode*del=node->next;
       node->val=node->next->val;
       node->next=del->next;
       delete del;
    }
};