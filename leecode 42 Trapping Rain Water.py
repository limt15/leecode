_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        l = len(height)
        leftMostHigh = [0 for i in range(len(height))]
        leftmax = 0
        for i in range(l):
            leftMostHigh[i] = leftmax
            if height[i] > leftmax:
                leftmax = height[i]

        rightmax = 0
        sum = 0
        for i in reversed(range(l)):
            if min(rightmax, leftMostHigh[i]) > height[i]:
                sum = sum + min(rightmax, leftMostHigh[i]) - height[i]
            if height[i] > rightmax:
                rightmax = height[i]

        return sum


height = [0,1,0,2,1,0,1,3,2,1,2,1]
s = Solution()
print(s.trap(height))