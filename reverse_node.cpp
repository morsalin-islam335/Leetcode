//program to reverse node
//problem link: https://leetcode.com/problems/reverse-linked-list/


class Solution {
public:
    void recursive(ListNode*&head,ListNode*current)
    {
        if(current->next==NULL)
        {
            head=current;
            return;
        }
        recursive(head,current->next);
        current->next->next=current;
        current->next=NULL;
    }
    ListNode* reverseList(ListNode* head) {
       if(head==NULL)
        {
            return head;
        }
        recursive(head,head);
        return head;
    }
};