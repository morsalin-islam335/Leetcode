//program to check palindrome or not
//problem link: https://leetcode.com/problems/palindrome-linked-list/

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
 
class Solution
{
public:
    void insertAtTail(ListNode*&head,ListNode*&tail,int val)
    {
        ListNode*newNode=new ListNode(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=newNode;
    }

    void recursion(ListNode *&head, ListNode *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        recursion(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }

    bool isPalindrome(ListNode *head)
    {
        ListNode*listhead=NULL;
        ListNode*listtail=NULL;
        ListNode*tmp=head;
        while(tmp!=NULL)
        {
            insertAtTail(listhead,listtail,tmp->val);
            tmp=tmp->next;
        }
        recursion(listhead,listhead);
        while(listhead!=NULL)
        {
            if(listhead->val!=head->val)
            {
                return false;
            }
            listhead=listhead->next;
            head=head->next;
        }
        return true;
    }
};