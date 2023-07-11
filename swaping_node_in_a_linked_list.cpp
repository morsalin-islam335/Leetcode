//program to swap node in a linked list
//problem link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/


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
    int size(ListNode*head)
    {
        int sz=0;
        while(head!=NULL)
        {
            sz++;
            head=head->next;
        }
        return sz;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)return head;
        else if(head->next==NULL)return head;
        else if(head->next->next==NULL)
        {
            swap(head->val,head->next->val);return head;
        }
        int poss2=size(head)-k+1;
        ListNode*tmp1=head,*tmp2=head;
        for(int i=1;i<k;i++)
        {
            tmp1=tmp1->next;
        }
        for(int i=1;i<poss2;i++)
        {
            tmp2=tmp2->next;
        }
        swap(tmp1->val,tmp2->val);
        return head;

    }
};