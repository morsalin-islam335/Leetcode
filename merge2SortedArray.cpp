// C++ solution

// #include<bits/stdc++.h>
// using namespace std;

// problem link:  https://leetcode.com/problems/merge-two-sorted-lists/


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



// class ListNode{
//     public:
//         int val;
//         ListNode  * next;

//         ListNode(int val)
//         {
//             this -> val = val;
//             this -> next = nullptr;
//         }
// };

class Solution {
public:

    int size(ListNode * head){
        int count = 0;
        while(head != nullptr)
        {
            count ++;
            head = head -> next;
        }
        return count;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (size(list1) == 0) // if size of list1 is 0 then it will be return list2
        {
            return list2;
        }
        else if (size(list2) == 0) // if size of list 1 is 0 then it will be return list2
        {
            return list1;
        }

        else{
            // make a vector which will contain all of values from list1 and list2
            vector<int>v;
            int size1 = size(list1); // size of list1
            int size2 = size(list2); // size of list2
            
            // make 2 temporary linked list so that we can traverse them easily. Because if we traverse main list we will lost their access 
            ListNode * tmp1 = list1;
            ListNode * tmp2 = list2;

            // now push all values from list1 and list2
            while(tmp1 != nullptr) // this loop will execute till tmp1 become empty
            {
                v.push_back(tmp1->val);
                tmp1 = tmp1 -> next; // update
            }

            while(tmp2 != nullptr) // this loop will execute till tmp2 become empty
            {
                v.push_back(tmp2->val);
                tmp2 = tmp2 -> next; // update
            }

            // now sorting all values of vector

            sort(v.begin(), v.end());
            // now make a new linked list which will contain all sorted value answer
            ListNode * answer = new ListNode(v[0]); // push first element of vector/array
            ListNode * tmp = answer; // make a temporary node so that we can push and traverse value;

            for(int i = 1; i<size1 + size2 ; i++)
            {
                ListNode * eachNode = new  ListNode(v[i]); // we use new keyword for dynamic memory allocation
                tmp -> next = eachNode;
                tmp = tmp -> next;
                
            }

            return answer;

        }

        return nullptr;  // this will not execute.  But we must return something form last part
    }
};