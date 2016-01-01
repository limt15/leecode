__author__ = 'YE'

class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        step = nums[0]
        for i in range(1, len(nums)):
            if step > 0:
                step -= 1
                step = max(step, nums[i])
            else:
                return False
        return True

nums = [3,2,1,0,4]
nums1 = [2,3,1,1,4]
print(Solution().canJump(nums1))
