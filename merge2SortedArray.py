
# problem link:  https://leetcode.com/problems/merge-two-sorted-lists/
# Definition for singly-linked list.


# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next



class Solution:
    def mergeTwoLists(self, list1, list2):
        # যেকোনো একটা empty হলে অন্য টা return করতে হবে।
        if not list1:
            return list2
        elif not list2:
            return list1
        
        # Initialize the answer list with a dummy node
        answer = ListNode()
        tmp = answer # by using this we can traverse it otherwise we will lose answer 

        while list1 and list2: # it will terminate if anyone become None
            if list1.val <= list2.val:
                tmp.next = list1
                list1 = list1.next
            else:
                tmp.next = list2
                list2 = list2.next
            tmp = tmp.next
        
        # Append remaining nodes of list1 or list2 to the merged list
        if list1:
            tmp.next = list1
        else:
            tmp.next = list2
        
        # Return the merged list starting from the next node of the dummy node
        return answer.next




