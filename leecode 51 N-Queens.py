__author__ = 'YE'

class Solution(object):
    def solveNQueens(self, n):
        """
        :type n: int
        :rtype: List[List[str]]
        """
        def check(k, j):
            for i in range(k):
                if board[i] == j or abs(k - i) == abs(board[i] - j):
                    return False
            return True

        def dfs(depth, valueList):
            if depth == n:
                res.append(valueList)
            else:
                for i in range(n):
                    if check(depth, i):
                        board[depth] = i
                        s = '.' * n
                        dfs(depth + 1, valueList + [s[:i] + "Q" + s[i+1:]])
        res = []

        board = [-1 for i in range(n)]
        dfs(0, [])

        return res

s = Solution()
n = 4
print(s.solveNQueens(n))

