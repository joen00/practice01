#include<iostream>
using namespace std;

//x는 가지의 수
//level은 높이의 수

char path[4];
void abc(int level)
{      
    //cout << "@"; //전체의 트리
    if (level == 2) {
        //cout << "@"; //마지막 가지
        cout << path << endl;
        return;
    }
    //cout << "@";
    for (int x = 0; x < 3; x++)
    {
        path[level] = x + 'A';
        //cout << "@"; //맨 위의 값에만 빼고
        abc(level + 1);
       // cout << "@"; // 되돌아 갈때
        path[level] = NULL;
    }
    //cout << "@";

}
int main()
{

    abc(0);

    return 0;
}
