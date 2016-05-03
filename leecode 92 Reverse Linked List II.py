__author__ = 'YE'

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseBetween(self, head, m, n):
        """
        :type head: ListNode
        :type m: int
        :type n: int
        :rtype: ListNode
        """
        if head == None or head.next == None:
            return head
        newHead = ListNode(0)
        newHead.next = head
        head1 = newHead
        for i in range(m - 1):
            head1 = head1.next
        p = head1.next
        print p.val
        for i in range(n - m):
            tmp = head1.next
            head1.next = p.next
            p.next = p.next.next
            head1.next.next = tmp
            print p.val, head1.val
        return newHead.next

