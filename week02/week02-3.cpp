//week02-3.cpp�ϥ� C++ 2011 �~�s�����r�� STOI()�\��
#include <iostream>// cin cout
#include <string>// string
using namespace std;
///�ϥΩR�W�Ŷ��зǪ�std
int main()
{
	string a;///�ŧi�r��
	string ans;///�ŧi�r�� ans �X���ץΪ�
	cin >> a;///Ū�J�r��
	int N = a.length();///�r��a������
	for(int i=N-1; i>=0; i--){///�˹L�Ӫ��j��
		ans += a[i];///�b�j��� ��a[i]���ans���᭱
	}

	cout << a << '+' << stoi(ans) << '=' << stoi(a) + stoi(ans) << endl;
}///stoi() is "string to int" ��r���ܦ����
