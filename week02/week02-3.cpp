//week02-3.cpp使用 C++ 2011 年新版的字串 STOI()功能
#include <iostream>// cin cout
#include <string>// string
using namespace std;
///使用命名空間標準的std
int main()
{
	string a;///宣告字串
	string ans;///宣告字串 ans 訪答案用的
	cin >> a;///讀入字串
	int N = a.length();///字串a的長度
	for(int i=N-1; i>=0; i--){///倒過來的迴圈
		ans += a[i];///在迴圈裡 把a[i]塞到ans的後面
	}

	cout << a << '+' << stoi(ans) << '=' << stoi(a) + stoi(ans) << endl;
}///stoi() is "string to int" 把字串變成整數
