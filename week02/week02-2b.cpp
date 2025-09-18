//week02-2b.cpp Part 2
#include <iostream>// cin cout
#include <string>// string
using namespace std;
int main()
{
	string a;
	string ans;
	cin >> a;
	int N = a.length();
	for(int i=N-1; i>=0; i--){
		ans += a[i];
	}

	cout << a << '+' << stoi(ans) << '=' << stoi(a) + stoi(ans) << endl;
}
