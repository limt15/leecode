_author_ = "YE"
# -*- coding:utf-8 -*-
class Solution(object):
    def verifyRow(self, board):
        for i in range(9):
            L = []
            for j in range(9):
                if board[i][j] == '.':
                    continue
                elif board[i][j] in L:
                    return False
                else:
                    L.append(board[i][j])
        return True

    def verifyColumn(self, board):
        for j in range(9):
            L = []
            for i in range(9):
                if board[i][j] == '.':
                    continue
                elif board[i][j] in L:
                    return False
                else:
                    L.append(board[i][j])
        return True

    def verifySquare(self, board):
        for i in range(3):
            for j in range(3):
                L = []
                for k in range(3):
                    for x in range(3):
                        if board[3 * i + k][3 * j + x] == '.':
                            continue
                        elif board[3 * i + k][3 * j + x] in L:
                            return False
                        else:
                            L.append(board[3 * i + k][3 * j + x])
        return True

    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        numbers = len(board[0])
        print(numbers)

        # print('row:',self.verifyRow(board))
        if not self.verifyRow(board):
            return False
        # print('column:',self.verifyColumn(board))
        if not self.verifyColumn(board):
            return False
        # print('square:',self.verifySquare(board))
        if not self.verifySquare(board):
            return False

        return True

#test code
s = Solution()
board = [".87654321","2........","3........","4........","5........","6........","7........","8........","9........"]
print(s.isValidSudoku(board))