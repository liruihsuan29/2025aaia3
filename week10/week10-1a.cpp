//week10-1a.cpp 寫2次 第一次for迴圈 第二次用數學
//1523. Count Odd Numbers in an Interval Range
//從low....high 裡面有幾個od奇數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i=low; i<=high; i++){//試了好多次 好慢
            if(i%2==1) ans++; //奇數
        }
        return ans;
    }
};
