__author__ = 'YE'

class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        #record the max distance
        last = 0

        #the number steps
        step = 0

        #current  max
        curr = 0

        for i in range(len(nums)):
            if i > last:
                step += 1
                last = curr
            curr = max(curr, i + nums[i])

        return step


nums = [2,3,1,1,4]
print(Solution().jump(nums))