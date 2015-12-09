_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def find(self,candidates, target, start, valueList):
        if target == 0:
            if valueList not in Solution.ans:
                Solution.ans.append(valueList)
        length = len(candidates)
        for i in range(start, length):
            if candidates[i] > target:
                return
            self.find(candidates, target - candidates[i], i + 1, valueList + [candidates[i]])

    def combinationSum2(self, candidates, target):
        """
        :type candidates: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        candidates.sort()
        Solution.ans = []
        self.find(candidates, target, 0, [])
        return Solution.ans

candidates = [10,1,2,7,6,1,5]
target = 8
s = Solution()
print(s.combinationSum2(candidates,target))
