#include<iostream>
using namespace std;

//x�� ������ ��
//level�� ������ ��

char path[4];
void abc(int level)
{      
    //cout << "@"; //��ü�� Ʈ��
    if (level == 2) {
        //cout << "@"; //������ ����
        cout << path << endl;
        return;
    }
    //cout << "@";
    for (int x = 0; x < 3; x++)
    {
        path[level] = x + 'A';
        //cout << "@"; //�� ���� ������ ����
        abc(level + 1);
       // cout << "@"; // �ǵ��� ����
        path[level] = NULL;
    }
    //cout << "@";

}
int main()
{

    abc(0);

    return 0;
}
