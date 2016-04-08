__author__ = 'YE'
class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        k = 0
        l = len(nums)
        if l == 0:
            return 0
        for i in range(l):
            t = 0;
            for j in range(k):
                if nums[i] == nums[j]:
                    t+=1
            if t < 2:
                nums[k] = nums[i]
                k += 1
        #for i in range(k):
        #    print(str(nums[i]) + " ")
        return k

