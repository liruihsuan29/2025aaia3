///week05-1.cpp
///leetcode �ǲ߭p�e built in function ��1�D 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); ///��r�� �ܦ����e�Ъ�cin iostream
        string word; ///�r�ꪺ word
        ///ss >> word; //�ܹ����e�Ъ� cin >> word
        ///cout << "Ū��F"  << word << "\n"; //���ե�
        ///ss >> word; //�ܹ����e�Ъ� cin >> word
        ///cout << "Ū��F"  << word << "\n"; //���ե�
        while(ss >> word){ ///�@��Ū���
            ///�̭����򳣤���
        }
        return word.length(); ///�̫᪺�r������ //return 0; //�H�K
    }
};
