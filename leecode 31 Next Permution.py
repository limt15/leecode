_author_ = "YE"
# -*- coding:utf-8 -*-
class Solution(object):
    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        #print(nums)
        len1 = len(nums)
        index = -1
        for i in range(len1 - 1):
            if nums[len1 - 1 - i] > nums[len1 - i - 2]:
                index = len1 - 1 - i
                break
        if index == -1:
            nums.sort()
        else:
            minindex = index
            minvalue = nums[index]
            for i in range(len1 - index - 1):
                if  minvalue > nums[index + i + 1] > nums[index - 1]:
                    minindex = index + i + 1
                    minvalue = nums[minindex]

            nums[minindex] = nums[index - 1]
            nums[index - 1] = minvalue

            #sort other numbers from index
            numbers = len1 - index
            #print(numbers)
            for i in range(numbers - 1):
                print('I:',i)
                for j in range(numbers - i - 1):
                    if nums[len1 - j - 1] < nums[len1 - j - 2]:
                        temp = nums[len1 - j - 1]
                        nums[len1 - j - 1] = nums[len1 - j - 2]
                        nums[len1 - j - 2] = temp

            #print(minindex, minvalue)
        #print(nums)




s = Solution()
s.nextPermutation([1,2])