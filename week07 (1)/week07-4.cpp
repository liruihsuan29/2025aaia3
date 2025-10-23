//week07-4.cpp �ǲ߭p�e simulation �����D ��4�D
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions;
        cout<< instructions;
        int x = 0, y = 0; //, x�y��, y�y��
        int d = 0;
        // �k�� d = (d+1) % 4 ��4���l��
        // ���� d = (d-1+4) % 4 = (d+3) %  4 ���M�i�H�˹L��
        int dx[4] = {0, 1, 0, -1}; //�e�i�@��� �|�� x += dx[d] �� y+= dy[d]
        int dy[4] = {1, 0, -1, 0};//�o��� �O�a��2��������� �M�w�e�i�h��
        for(char c : instructions){
            if(c=='G'){ // �e�i�@�� �t�Xdx[d] dy[d]�e�i
                x += dx[d];
                y += dy[d];
            }else if (c=='R'){ //�k��
                d = (d+1) % 4;
            }else if (c=='L'){ //����
                d = (d+3) % 4;
            }
        }//���}�j���...���M�|�@���� ���ɭԷ|�����^�� ���ɭԷ|�^��
        cout << 'x' << x << 'y' << y << endl;
        if (x==0 && y==0) return true;
        else return false;
    }
};
