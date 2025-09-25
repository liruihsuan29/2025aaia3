//week03-3b.cpp 二合一的第1種方法
//leetcode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;//直接移動 [k] = nums[i] 再把k++
        for(int i=0; i<nums.size(); i++){
            if(nums[i] !=0) nums[k++] = nums[i];
        }
        for(int i=k; i<nums.size();i++){
            nums[i] = 0;
        }
    }
};
