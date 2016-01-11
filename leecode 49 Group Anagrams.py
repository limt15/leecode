_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        ref = {}
        length = len(strs)
        for str in strs:
            word = "".join(sorted(str))
            if word in ref:
                ref[word]  = ref[word] + [str]
            else:
                ref[word] = [str]
        res = []
        for key in ref:
            l = ref[key]
            l.sort()
            res.append(l)

        return res




s = Solution()
strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
print(s.groupAnagrams(strs))
