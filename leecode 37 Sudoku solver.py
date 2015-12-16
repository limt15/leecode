class Solution(object):
    def solveSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: void Do not return anything, modify board in-place instead.
        """
        def isValid(x, y):
            temp = board[x][y]
            board[x][y] = 'r'
            for i in range(9):
                if board[i][y] == temp:
                    return False
            for i in range(9):
                if board[x][i] == temp:
                    return False
            for i in range(3):
                for j in range(3):
                    if board[x / 3 * 3 + i][y / 3 * 3 + j] == temp:
                        return False
            board[x][y] = temp
            return True

        def dfs(board):
            for i in range(9):
                for j in range(9):
                    if board[i][j] == '.':
                        for k in '123456789':
                            board[i][j] = k
                            if isValid(i,j) and dfs(board):
                                return True
                            board[i][j] = '.'
                        return False
            return True
            
        dfs(board)
        