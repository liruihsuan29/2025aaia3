//week04-4d.cpp part1: input part2:output
//UVA100 the 3n + 1
//part3:algorithm(while,if), part4: now
//part5: for(int i=a; i,=b; i++) {int n=i;
#include <iostream>
using namespace std;
int main()
{
	int a, b; //part1: input
	while( cin >> a >> b){
		int ans = 0;
		int a2=a, b2=b;//part6
		if(a2>b2) swap(a2, b2);//part6
		for(int i=a2; i<=b2; i++){ //part5 part6
			int now=1; //part4
			int n=i;
			while(n != 1) { //part3
				if(n%2==1) n = 3*n+1;
				else n = n  / 2;
				now++; //part4
			}
			if(now>ans)ans = now; //part4
		}
		printf("%d %d %d\n", a, b, ans);
	} //part2: output
}
