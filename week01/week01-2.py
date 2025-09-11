#week01-2.py
#leetcode 28.Find the Index of the First Occurrence in a String
#在haystack 乾稻草堆裡找到needle針
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #字串長度
        N = len(needle) #字串長度
        for i in range(H-N+1): #要記得+1
            #切片 slicing
            if haystack[i:i+N] == needle: #找到的話
                return i #把位置當答案
        return -1 #沒有找到
