__author__ = 'YE'

class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        ans = []
        for i in range(numRows):
            this = []
            for j in range(i+1):
                this.append(1)
            if i > 1:
                for x in range(i - 1):
                    this[x+1] = ans[i-1][x] + ans[i-1][x+1]
            print this
            ans.append(this)
        return ans