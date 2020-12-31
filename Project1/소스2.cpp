#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    
    char arr[4][5][4] = { "0#0","#0#","###","#0#","#0#",
        "###","#0#","###","#0#","###",
        "###","#0#","#00","#0#","###",
        "##0","#0#","#0#","#0#","##0"
    };

    int a;
    cin >> a;
    if (a == 0) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[0][i][j] == '0') {
                    cout << " ";
                }
                else {
                    cout << arr[0][i][j];
                }
            }
            cout << endl;
        }
    }
    else if (a == 1) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[1][i][j] == '0') {
                    cout << " ";
                }
                else {
                    cout << arr[1][i][j];
                }
            }
            cout << endl;
        }
    }
    else if (a == 2) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[2][i][j] == '0') {
                    cout << " ";
                }
                else {
                    cout << arr[2][i][j];
                }
            }
            cout << endl;
        }
    }
    else if (a == 3) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[3][i][j] == '0') {
                    cout << " ";
                }
                else {
                    cout << arr[3][i][j];
                }
            }
            cout << endl;
        }
    }

    return 0;
}
