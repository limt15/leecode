__author__ = 'YE'

class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        def fac(n):
            f = 1
            for i in range(1, n + 1):
                f *= i
            return f

        m -= 1
        n -= 1
        if m == 0 or n == 0:
            return 1
        return fac(m + n) / (fac(m) * fac(n))

print(Solution().uniquePaths(3, 7))