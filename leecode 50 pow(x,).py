_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        def p(x, n):

            if n ==0:
               return 1.0
            half = self.myPow(x, n / 2)
            if n % 2 == 0:
                return half * half
            else:
                return half * half * x
        s = False
        if n < 0:
            n = -n
            s = True
        if s == True:
            return (1.0) / p(x, n)
        else:
            return p(x, n)

