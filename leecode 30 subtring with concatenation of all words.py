_author_ = "YE"
# -*- coding:utf-8 -*-
# SH……把d.get(each_str, -1) == -1类似的判断改为 each_str not in d 就AC了……说明后者效率高呀
def findSubstring(s, words):
        """
        :type s: str
        :type words: List[str]
        :rtype: List[int]
        """
        import math
        rtype = []
        dic = {}

        len_word = len(words)
        if len_word == 0:
            return rtype
        #print('len of words:%s' % len_word)

        len_each_word = len(words[0])
        #print('len of each word:%s' % len_each_word)

        all_len = len_word * len_each_word
        #print("all len:", all_len)

        for x in words:
            if x  in dic:
                dic[x] = dic[x] + 1
            else:
                dic[x] = 1

        #print('dictionary:')
        #print(dic)

        #print(dic.get('arf',-1) == -1)

        len_s = len(s)
        #print('the len of the str s', len_s)

        if len_s < all_len:
            return rtype

        #print('From loop')

        for i in range(len_s - all_len + 1):
            str = s[i:i+all_len]
            count = 0
            d = {}
            for j in range(len_word):
                each_str = str[j * len_each_word:(j + 1) * len_each_word]
                if each_str not in dic:
                    count = 0
                    break
                elif each_str in d:
                    if d[each_str] == dic[each_str]:
                        count = 0
                        break
                    else:
                        d[each_str] = d[each_str] + 1
                        count = count + 1
                        continue
                else:
                    d[each_str] = 1
                    count = count + 1
            if count == len_word:
                rtype.append(i)
                count = 0
        #print(rtype)


s = "barfoothefoobarman"
words = ["foo","bar"]
findSubstring(s, words)