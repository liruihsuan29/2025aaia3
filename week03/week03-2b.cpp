//week03-2b.cpp �G�X�@ �n�g�⦸
//leetcode �ǲ߭p�e��8�D 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;//�]��0������� ���|��0 �u��1�̨� �������ܤ���
        for(int i=0; i<nums.size(); i++){//�ݦ��X�Ӽ� �j��]�X��
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
            //ans *= nums[i];//�C����nums[i] ���ians��
        }//�Ʀr�V���V�j 1000�Ӽ� ����@�b �N�z���F �ҥH�{�����F ����

        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
