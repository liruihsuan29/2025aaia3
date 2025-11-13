///week07-2.cpp
///礶禬タよ 计癬ㄓ
///TAICAユ膀娄祘Α砞璸 C++ 戳いσ
#include <iostream>
#include <cmath> ///碞琌cmath.h柑Τsin() cos() abs()
using namespace std;
int main()
{
    int n; ///part 1: input
    cin >> n;

    for(int i=1; i<n*2; i++){ ///part2: output
        for(int j=1; j<n*2; j++){
            ///ㄓぇ 祇瞷現いみ1Τ種
            int d = max(abs(i-n), abs(j-n));
            cout << d+1; ///cout << n
        }
        cout << "瞷i琌: " << i << endl; ///加糷阀├
    }
    ///part2: output
}///2穦Τ3糷加 3穦Τ5糷加  4穦Τ7糷加  5穦Τ9糷加
