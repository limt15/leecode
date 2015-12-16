_author_ = "YE"
# -*- coding:utf-8 -*-

class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        len1 = len(num1)
        len2 = len(num2)

        list1 = [0 for i in range(len1)]
        list2 = [0 for i in range(len2)]

        for i in range(len1):
            list1[len1 - 1 - i] = int(num1[i])
        for i in range(len2):
            list2[len2 - 1 -i] = int(num2[i])

        # print(list1,list2)

        mul = [0 for i in range(len1 + len2)]

        for i in range(len2):
            carry = 0
            for j in range(len1):
                mul[i + j] = mul[i + j] + carry + (list2[i] * list1[j]) % 10

                carry = (list2[i] * list1[j]) // 10

                if mul[i + j] >= 10:
                    carry = carry + mul[i + j] // 10
                    mul[i + j] = mul[i + j] % 10


            if carry > 0:
                mul[i + len1] += carry
                if mul[i + len1] > 10:
                    mul[i + len1] = mul[i + len1] % 10
                    carry += mul[i + len1] // 10

        index = len1 + len2 - 1
        while index >= 0:
            if mul[index] > 0:
                break
            index -= 1

        if index + 1 < len1 + len2:
            mul[index+1:] = []

        mul.reverse()

        s = ''
        for i in range(len(mul)):
            s += str(mul[i])
        if s == '':
            s = '0'
        return s

str1 = '12312'
str2 = '4234'
s = Solution()

print(s.multiply(str1,str2))

