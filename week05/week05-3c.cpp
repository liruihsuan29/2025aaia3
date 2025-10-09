///week05-3c.cpp Part1: Input Part2:Output
///part3:stringstream part4: reverse
///part5:火車頭+車廂+車廂+車廂
///CPE 第2題 UVA 483倒過來
#include <iostream>
#include <sstream> ///part3 stringstream 的檔案是sstream
#include <algorithm> ///part4 reverse的演算法
using namespace std;
int main()
{
    string line; ///一行字的字串
    while(getline(cin, line)){///讀進來
        stringstream ss(line); ///part3:用stringstream斷字
        string word; ///字放這裡
        ss >> word;///火車頭在這裡
        reverse( word.begin(), word.end() );
        cout << word; ///火車頭沒有空格
        while (ss >> word){ ///part3:用stringstream斷字
            reverse(word.begin(), word.end() ); ///part4
            cout << " " <<word; ///+車廂
            ///cout << "讀到了 "  << word << endl; ///part3

        }
        cout << endl;///cout << line << endl; ///Part2: output
    }

}
