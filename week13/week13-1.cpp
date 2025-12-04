//week13-1.cpp 聖誕倒數寫程式 advent of code 2025 第一天第一題
//moodle 點擊 adventofcode.com 網址 可看到黑底 白字題目
//在leetcode 的 myplaground 我的遊戲場 可以寫程式
//leetcode 幫你把#include全部都加好了 你不用寫
//右下角 stdin 可貼上你的程式 Input
int main() {
    char c; //字母 對應方向l轉左r轉右
    int d; //數字 要轉動幾格
    int now = 50; // 一開始的密碼鎖 指向50
    int ans = 0; //轉動時 有幾次停在0的地方
    while (cin >> c >> d){ // 一直讀資料 獨字母 讀數字
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";
        //把上面兩行的中文註解掉
        if(c=='L') now = now - d; // 減掉
        if(c=='R') now = now + d; // 加上

        now = (now%100 + 100)% 100; //太大的 太小的 都限制在 0-99間
        //cout << "現在的刻度是: " << now << "\n";
        if(now==0) ans++;  // 轉動時 停在0 的地方
    }
    cout << "答案是: " << ans;
}


/*
input: 從體木剪貼備份的Input
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
*/
