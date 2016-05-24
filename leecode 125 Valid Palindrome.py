__author__ = 'YE'

class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        c = []
        for i in s:
            if i.isalnum():
                c.append(i.lower())
        for i in range(len(c)/2):
            if c[i] != c[len(c)-1-i]:
                return False
        return True