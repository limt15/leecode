_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def find(self,candidates, target, start, valueList):
        if target == 0:
            Solution.ans.append(valueList)
        length = len(candidates)
        for i in range(start, length):
            if candidates[i] > target:
                return
            self.find(candidates, target - candidates[i], i, valueList + [candidates[i]])

    def combinationSum(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
        Solution.ans = []
        self.find(candidates, target, 0, [])
        return Solution.ans

s = Solution()
candidates = [2,3,6,7]
target = 7
print(s.combinationSum(candidates, target))