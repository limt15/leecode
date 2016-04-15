__author__ = 'YE'
class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        all = m + n - 1
        m = m - 1
        n = n - 1
        while m >= 0 and n >= 0:
            if nums1[m] > nums2[n]:
                nums1[all] = nums1[m]
                m = m - 1
                all = all - 1
            else:
                nums1[all] = nums2[n]
                n = n - 1
                all = all - 1
        while n >= 0:
            nums1[all] = nums2[n]
            all = all - 1
            n = n - 1


