_author_ = "YE"
# -*- coding:utf-8 -*-
class Solution(object):
    def findRight(self, nums, first, mid):
        if nums[first] == nums[mid]:
            return mid
        nmid = (first + mid) // 2
        if nmid == first:
            return first
        if nums[nmid] == nums[first]:
            return self.findRight(nums, nmid, mid)
        else:
            return self.findRight(nums,first, nmid)

    def findLeft(self, nums, mid, last):
        if nums[mid] == nums[last]:
            return mid
        nmid = (mid + last) // 2
        if nmid == mid:
            return last
        if nums[nmid] == nums[last]:
            return self.findLeft(nums, mid, nmid)
        else:
            return self.findLeft(nums,nmid + 1, last)


    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        last = len(nums)
        first = 0
        while first < last:
            mid = (first + last) // 2
            # print(first,mid,last)
            if nums[mid] == target:
                # print(self.findLeft(nums,first, mid))
                # print(self.findRight(nums,mid,last - 1))
                return [self.findLeft(nums,first, mid), self.findRight(nums,mid,last - 1)]
            elif nums[mid] < target:
                first = mid + 1
            else:
                last = mid

        return [-1,-1]

nums = [5, 7, 7, 8, 8,8, 10]
target = 5
s = Solution()
print(s.searchRange(nums, target))