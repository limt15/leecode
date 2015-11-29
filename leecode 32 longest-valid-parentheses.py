_author_ = "YE"
# -*- coding:utf-8 -*-

def longestValidParentheses(s):
        """
        :type s: str
        :rtype: int
        """
        maxlength = 0
        L = []
        last = 0
        if len(s) == 0:
            return 0
        for i in range(len(s)):
            #print(len(s),len(L))
            if s[i] == '(':
                L.append(i)
            elif s[i] == ')':
                if len(L) == 0:
                    length = i - last
                    L = []
                    last = i + 1
                    if length > maxlength:
                        maxlength = length

                else:
                    L.pop()
                    if len(L) == 0:
                        length = i + 1 - last
                    else:
                        length = i - L[-1]
                    if length > maxlength:
                        maxlength = length
            #print(maxlength)


        return maxlength


print(longestValidParentheses(")()())()()("))