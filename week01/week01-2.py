#week01-2.py
#leetcode 28.Find the Index of the First Occurrence in a String
#�bhaystack ���_���̧��needle�w
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #�r�����
        N = len(needle) #�r�����
        for i in range(H-N+1): #�n�O�o+1
            #���� slicing
            if haystack[i:i+N] == needle: #��쪺��
                return i #���m����
        return -1 #�S�����
