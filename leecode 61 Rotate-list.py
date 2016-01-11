__author__ = 'YE'

# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        if k == 0 or head == None:
            return head

        addFirst = ListNode(0)
        addFirst.next = head
        # move variable
        p = addFirst
        #the length of list
        count = 0
        while p.next != None:
            p = p.next
            count += 1
        p.next = addFirst.next
        #the real step to shift right
        step = count - (k % count)
        p = addFirst.next
        for i in xrange(1, step):
            p = p.next
        head = p.next
        p.next = None

        return head

