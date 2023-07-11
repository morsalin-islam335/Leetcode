//program to merge node from a singly linked list
//problem link: https://leetcode.com/problems/merge-nodes-in-between-zeros/

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
    void insertAtTail(ListNode*&head,ListNode*&tail,int val)
    {
        ListNode*newNode=new ListNode(val);
        if(head==NULL){
            head=newNode;tail=newNode;return;
        }
        tail->next=newNode;tail=newNode;
    }

    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL)return head;
        else if(head->val==0&&head->next==NULL)return NULL;
        else if(head->val==0&&head->next->val==0&&head->next==NULL)return NULL;

        ListNode*head2=NULL,*tail2=NULL;


        ListNode*tmp=head;
        int val=0;
        while(tmp->next!=NULL)
        {
            if(tmp->next->val!=0)
            {
                val+=tmp->next->val;
            }
            else{
                insertAtTail(head2,tail2,val);
                val=0;
            }
            tmp=tmp->next;
        }
        return head2;
    }
};