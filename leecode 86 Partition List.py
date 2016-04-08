__author__ = 'YE'

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def partition(self, head, x):
        """
        :type head: ListNode
        :type x: int
        :rtype: ListNode
        """
        head1 = ListNode(0)
        head2 = ListNode(0)

        p1 = head1
        p2 = head2

        tmp = head

        while tmp:
            if tmp.val < x:
                p1.next = tmp
                tmp = tmp.next
                p1 = p1.next
                p1.next = None
            else:
                p2.next = tmp
                tmp = tmp.next
                p2 = p2.next
                p2.next = None
        p1.next = head2.next
        return head1.next
