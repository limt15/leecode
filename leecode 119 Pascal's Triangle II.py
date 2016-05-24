__author__ = 'YE'

class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        rowIndex += 1
        ans = []
        if rowIndex == 0:
            return []
        for i in range(rowIndex):
            this = []
            for j in range(i+1):
                this.append(1)
            if i > 1:
                for x in range(i - 1):
                    this[x+1] = ans[i-1][x] + ans[i-1][x+1]
            print this
            ans.append(this)

        return ans[rowIndex - 1]