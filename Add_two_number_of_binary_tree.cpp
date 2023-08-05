//program for add two number of from binary tree
//problem link: https://leetcode.com/problems/add-two-numbers

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
    void insert_at_tail(ListNode * &head, ListNode * &tail , int val)
    {
        ListNode * newNode = new ListNode(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail -> next = newNode;
        tail = newNode;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      if(l1 == NULL) return l2;
      else if(l2 == NULL) return l1;
      ListNode * tmp1 = l1, *tmp2 = l2;
      vector<int>v1,v2,ansVector;
      while(tmp1 != NULL)
      {
          v1.push_back(tmp1 -> val);
          tmp1 = tmp1 -> next;
      }

      while(tmp2 != NULL)
      {
          v2.push_back(tmp2 -> val);
          tmp2 = tmp2 -> next;
      }  
      int keepHand = 0; int sum;
      int minSize = min(v1.size(), v2.size());
      for(int i = 0; i< minSize; i++)
      {
          sum = v1[i] + v2[i] + keepHand;
          if(sum < 10)
          {
              ansVector.push_back(sum);
              keepHand = 0;
          }
          else
          {
              ansVector.push_back(sum % 10);
              keepHand = sum/10;
          }
      }
      if(v1.size() > v2.size())
      {
          for(int i = minSize; i< v1.size(); i++)
          {
              sum = v1[i] + keepHand;
              if(sum < 10)
              {
                  ansVector.push_back(sum);
                  keepHand = 0;
              }
              else
              {
                  ansVector.push_back(sum % 10);
                  keepHand = sum/10;
              }
          }
          if(keepHand >0) ansVector.push_back(keepHand);
      }
      else if(v1.size() < v2.size())
      {
               for(int i = minSize; i< v2.size(); i++)
                {
                    sum = v2[i] + keepHand;
                    if(sum < 10)
                    {
                        ansVector.push_back(sum);
                        keepHand = 0;
                    }
                    else
                    {
                       ansVector.push_back(sum % 10);
                        keepHand = sum/10;
                    }
                 }
                if(keepHand >0) ansVector.push_back(keepHand);
      }
      else
      {
          if(keepHand >0) ansVector.push_back(keepHand);
      }

      ListNode * head = NULL, * tail = NULL;
      for(int i = 0; i<ansVector.size(); i++)
      {
          insert_at_tail(head, tail, ansVector[i]);
      }
      return head;
      
    }
};
