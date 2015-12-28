__author__ = 'YE'

class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length = len(nums)
        if length == 0:
            return 0
        if length == 1:
            return nums[0]

        d = [0 for i in range(length)]

        d[0] = nums[0]
        max = d[0]

        for i in range(1, length):
            d[i] = nums[i] + d[i - 1] if (nums[i] + d[i - 1]) > nums[i] else nums[i]
            if d[i] > max:
                max = d[i]
        return max

s = Solution()
nums = [-2,1,-3,4,-1,2,1,-5, 4]
print(s.maxSubArray(nums))