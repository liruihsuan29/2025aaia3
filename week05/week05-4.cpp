//week05-4.cpp
//leetcode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        } //�C�Ӧr�� ���ܦ��p�g
        //�άO��#include <cctype>��ӬO�P�@���ɮ�
        return s;//�ɮװe�X�h
    }
};
