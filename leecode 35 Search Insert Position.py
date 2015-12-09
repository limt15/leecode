_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        len1 = len(nums)
        first = 0
        last = len1
        while first < last:
            mid = (first + last) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                first = mid + 1
            else:
                last = mid - 1
        # print(first,last)
        if first < len1 and nums[first] < target:
            return first + 1
        return first

s = Solution()
nums = [1,3]
target = 2
print(s.searchInsert(nums, target))
