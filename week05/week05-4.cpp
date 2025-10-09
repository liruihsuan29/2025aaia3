//week05-4.cpp
//leetcode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        } //每個字母 都變成小寫
        //或是用#include <cctype>兩個是同一個檔案
        return s;//檔案送出去
    }
};
