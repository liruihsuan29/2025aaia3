//week06-3.cpp
//leetcode �ǲ߭p�e simulation �Ĥ@�D 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations) {//c++�i���j��
            //cout << op <<"\n"; //�ոլ� �|�L�X����F��
            if(op[0]=='+'){ //�⥽��Ƭۥ[ �A��^�h
                int temp = a.back();//���O�U�̫�@��
                a.pop_back();//�ȮɦR���o
                int temp2 = a.back();//�A�O�U�̫�ⶵ
                a.push_back(temp);//����̫�@����^�h
                a.push_back(temp+temp2);//��Ƭۥ[ �A��^�h
            } else if (op[0]=='D'){ //�ƻs�̫�@�� �A���⭿ �A��^�h
                a.push_back(a.back()*2);
            } else if(op[0]=='C'){ //�R���̫�@��
                a.pop_back();
            } else { //��stoi(op) ��� ��^�h
                a.push_back( stoi(op) );
            }
        }//�̫� ��for�j�� ��}�Ca���� �����[�_��
        int ans = 0;
        for(int now : a){ //c++ �i���j�� �]�i�H�� for(int i=0; i<a.size(); i++) { int now=a}
            ans += now;
        }
        return ans; //���H�K retturn 0 ���@�U�A��
    }
};
