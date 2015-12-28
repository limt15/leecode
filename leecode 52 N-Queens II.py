__author__ = 'YE'

class Solution(object):
    def totalNQueens(self, n):
        """
        :type n: int
        :rtype: int
        """
        def check(k, j):
            for i in range(k):
                if board[i] == j or abs(k - i) == abs(board[i] - j):
                    return False
            return True

        board = [-1 for i in range(n)]

        row = 0
        col = 0
        count = 0


        while row < n:
            while col < n:
                if check(row, col):
                    board[row] = col
                    col = 0
                    break
                else:
                    col += 1
            if board[row] == -1:
                if row == 0:
                    break
                else:
                    row -= 1
                    col = board[row] + 1
                    board[row] = -1
                    continue
            if row == n - 1:
                count += 1
                col = board[row] + 1
                board[row] = -1
                continue
            row += 1
        return count



n = 4
print(Solution().totalNQueens(n))
print(list(range(1,3)))