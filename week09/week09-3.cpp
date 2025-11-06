//week09-3.cpp
//leetcode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int up=0, down=M-1, left=0, right=N-1; //先把上下左右的邊界 都宣告一個變數初始值
        vector<int> ans;
        while(up<=down && left<=right){
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[up][i]);
            }
            up++; //AI助手說 要加up++
            for(int i=up; i<=down; i++){
                ans.push_back(matrix[i][right]);
            }
            right--; //AI助手說 是右邊界內縮
            if( ! (up<=down && left<=right)) break;
            for(int i=right; i>=left; i--){ //到過來的迴圈往左
                ans.push_back(matrix[down][i]);
            }
            down--;
            for(int i=down; i>=up; i--){ //到過來的迴圈往上
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
         return ans;
    }
};
