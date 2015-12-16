_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        len1 = len(nums)
        if len1 == 0:
            return 1
        dic = {}
        for num in nums:
            if num > 0:
                dic[num] = num
        for i in range(1, len1 + 1):
            if dic.get(i, -1) == -1:
                return i
        return len1 + 1