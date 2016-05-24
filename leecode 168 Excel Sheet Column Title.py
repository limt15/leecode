__author__ = 'YE'

class Solution(object):
    def convertToTitle(self, n):
        """
        :type n: int
        :rtype: str
        """
        res = ""
        while n:
            h = (n - 1) % 26
            res = chr(ord('A') + h) + res
            n = (n - 1) / 26
        return res
