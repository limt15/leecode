__author__ = 'YE'
class Solution(object):
    def grayCode(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        if n <= 0:
            return [0]
        size = 1 << n
        res = []
        for i in range(size):
            res.append((i>>1)^i)
        return res