_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: void Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        for i in range(n):
            for j in range(i + 1, n):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

        for i in range(n):
            matrix[i].reverse()

s = Solution()
f = [[1,2,3],
    [4,5,6],
    [7,8,9]]

print(s.rotate(f))
print(f)