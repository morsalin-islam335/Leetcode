//program to return mid node
//problem_link: https://leetcode.com/problems/middle-of-the-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int size(ListNode*head){
        int sz=0;
        while(head!=NULL)
        {
            sz++;
            head=head->next;
        }
        return sz;

    }

    ListNode* middleNode(ListNode* head) {
        ListNode*tmp=head;
        int sz=size(head);
        for(int i=1;i<sz/2;i++)
        {
            tmp=tmp->next;
        }
        if(sz>1)return tmp->next;
        else return head;
        
    }
};