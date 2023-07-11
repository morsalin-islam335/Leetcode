//progrm to delete nth node from linked list
//problem link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    int sz(ListNode*head)
    {
        int size=0;
        ListNode*tmp=head;
        while(tmp!=NULL)
        {
            size++;
            tmp=tmp->next;
        }
        return size;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return head;
        else if(n==0)return head;
        else if(head->next==NULL)return NULL;
        else if(n==sz(head))
        {
            head=head->next;return head;
        }
        int size=sz(head)-n;
        ListNode*tmp=head;
        for(int i=1;i<size;i++)
        {
            tmp=tmp->next;
        }
        tmp->next=tmp->next->next;
        return head;
    }
};