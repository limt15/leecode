_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        size = len(nums)
        first = 0
        last = size
        while first < last:

            mid = (last + first) // 2
            print(first,mid, last)
            if nums[mid] == target:
                return mid
            elif nums[first] <= nums[mid]:
                if target <= nums[mid] and target >= nums[first]:
                    last = mid
                else:
                    first = mid + 1
            else:
                if target > nums[mid] and target < nums[first]:
                    first = mid + 1
                else:
                    last = mid



        return -1



s = Solution()
nums = [3,1]
target = 3
print(s.search(nums, target))