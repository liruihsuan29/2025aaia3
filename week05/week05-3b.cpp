///week05-3b.cpp Part1: Input Part2:Output
///part3:stringstream part4: reverse
///CPE ��2�D UVA 483�˹L��
#include <iostream>
#include <sstream> ///part3 stringstream ���ɮ׬Osstream
#include <algorithm> ///part4 reverse���t��k
using namespace std;
int main()
{
    string line; ///�@��r���r��
    while(getline(cin, line)){///Ū�i��
        stringstream ss(line); ///part3:��stringstream�_�r
        string word; ///�r��o��
        while (ss >> word){ ///part3:��stringstream�_�r
            reverse(word.begin(), word.end() ); ///part4
            cout << "Ū��F "  << word << endl; ///part3
        }
        cout << line << endl; ///Part2: output
    }

}
