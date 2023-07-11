//program to return  mid node
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
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head;
        ListNode*first=head;
        while(first!=NULL&&first->next!=NULL)
        {
            slow=slow->next;
            first=first->next->next;
        }
        return slow;
        
    }
};