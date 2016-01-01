__author__ = 'YE'

class Solution(object):
    def permuteUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        nums.sort()
        if len(nums) == 1:
            return [nums]
        res = []
        pre = None
        for i in range(len(nums)):
            if nums[i] == pre:
                continue
            pre = nums[i]
            for j in self.permuteUnique(nums[:i] + nums[i+1:]):
                res.append([nums[i]] + j)
        return res