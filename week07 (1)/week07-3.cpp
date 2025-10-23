//week07-3.cpp leetcode 學習計畫simulation 地3題
//1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:               //vector 是C++的陣列 伸縮自如 但是2D比較難寫
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; //c語言的陣列 大衣教過 比較簡單//大括號 代表初始值 裡面空的都代表0
        int now = 1; //1:玩家A 2:玩家B
        int winner = 0; //還沒有找到得勝的玩家
        for(vector<int>& move : moves ){
            int i = move[0], j = move[1]; //取出座標
            a[i][j] = now; //把棋子 下在陣列
            //下完後要檢查 有沒有得勝
            if (now==a[i][0] && now==a[i][1] && now==a[i][2]) winner = now;
            if (now==a[0][j] && now==a[1][j] && now==a[2][j]) winner = now;
            if (now==a[0][0] && now==a[1][1] && now==a[2][2]) winner = now;
            if (now==a[0][2] && now==a[1][1] && now==a[2][0]) winner = now;
            if(now==1) now = 2; //兩人要交換2換1
            else now = 1; //或2換1
        }
        if(winner==1) return "A";
        else if(winner==2) return "B";
        else if(moves.size()==9) return "Draw";
        else return "Pending"; //平手的英文 draw
    }
};
