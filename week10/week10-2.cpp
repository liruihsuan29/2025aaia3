//week10-2.cpp 埃程 程 キА羱
//leetcode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0; //р羱常癬ㄓ
        int N = salary.size(); //羆ΤN
        int M = salary[0], m = salary[0]; //р材0 讽程 程
        for(int i=0; i<N; i++){
            total += salary[i]; //р羱常癬ㄓ
            if(salary[i]>M) M = salary[i];
            if(salary[i]<m) m = salary[i];
        }
        //return total /N ;//ぃ钡场常埃 璶Ι奔程程
        return (total- M -m) / (N-2); //埃2(程 程) 埃
    }
};
