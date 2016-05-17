__author__ = 'YE'

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def help(p, q):
            if p == None and q == None:
                return True
            if p and q and p.val == q.val:
                return help(p.left, q.right) and help(p.right, q.left)
            return False

        if root:
            return help(root.left, root.right)
        return True
