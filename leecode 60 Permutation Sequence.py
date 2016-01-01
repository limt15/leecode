__author__ = 'YE'

class Solution(object):
    def getPermutation(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: str
        """
        res = ""
        nums = [i + 1 for i in xrange(n)]
        #count from 0
        k -= 1
        fac = 1
        for i in xrange(1, n):
            fac *= i
        for i in reversed(xrange(n)):
            index = k / fac
            value = nums[index]
            res += str(value)
            nums.remove(value)
            if i != 0:
                k %= fac
                fac /= i
        return res