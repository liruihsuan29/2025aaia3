///week07-2.cpp
///�e�X�W�j������� �Ʀr�]�_��
///TAICA��j��¦�{���]�p C++ ������
#include <iostream>
#include <cmath> ///�N�Oc��math.h�̭���sin() cos() abs()
using namespace std;
int main()
{
    int n; ///part 1: input
    cin >> n;

    for(int i=1; i<n*2; i++){ ///part2: output
        for(int j=1; j<n*2; j++){
            ///�L�X�Ӥ��� �o�{�F���ߪ�1�ܦ��N��
            int d = max(abs(i-n), abs(j-n));
            cout << d+1; ///cout << n
        }
        cout << "�{�bi�O: " << i << endl; ///�Ӽh������
    }
    ///part2: output
}///2�|��3�h�� 3�|��5�h��  4�|��7�h��  5�|��9�h��
