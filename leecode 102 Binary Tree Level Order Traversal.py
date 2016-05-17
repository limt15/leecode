__author__ = 'YE'
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def preorder(self, root, level, res):
        if root:
            if len(res) < level + 1: res.append([])
            res[level].append(root.val)
            self.preorder(root.left, level + 1, res)
            self.preorder(root.right, level + 1, res)
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        res = []
        self.preorder(root, 0, res)
        print res
        return res