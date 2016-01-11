__author__ = 'YE'

class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        m = len(matrix)
        n = len(matrix[0])
        low = 0
        high = m - 1

        while low <= high:
            mid = (low + high) / 2
            if matrix[mid][0] == target:
                return True
            elif matrix[mid][0] > target:
                high = mid - 1
            else:
                low = mid + 1
        row = low - 1

        #if row < 0:return False

        if row < 0:
            row = 0

        low = 0
        high = n - 1

        while low <= high:
            mid = (low + high) / 2
            if matrix[row][mid] == target:
                return True
            elif matrix[row][mid] > target:
                high = mid - 1
            else:
                low = mid + 1
        return False

matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,50]]
target = 16
print(Solution().searchMatrix(matrix,target))