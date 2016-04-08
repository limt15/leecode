__author__ = 'YE'

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None or head.next == None:
            return head

        ans = ListNode(-1)
        ans.next = head
        p = ans
        temp = p.next

        while p.next:
            while temp.next and temp.next.val == p.next.val:
                temp = temp.next
            if p.next == temp:
                p = p.next
                temp = p.next
            else:
                p.next = temp.next

        return ans.next

