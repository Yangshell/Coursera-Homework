#include<iostream>
#include<stdlib.h>
using namespace std;
int starti, startj, endi, endj, step = 0;
void goout(char a[102][102], int x, int y, int flag){
    //cout << x << ' ' << y << endl;
    if(x == endi & y == endj){
        //cout << "yes" << endl;
        return;
    }
    if(a[x][y + 1] != '#' & flag != 4){
        a[x][y] = '^';
        step++;
        goout(a, x, y + 1, 2);
    }
    if(a[x + 1][y] != '#' & flag != 1){
        a[x][y] = '^';
        step++;
        goout(a, x + 1, y, 3);
    }
    if(a[x - 1][y] != '#' & flag != 3){
        a[x][y] = '^';
        step++;
        goout(a, x - 1, y, 1);
    }
    if(a[x][y - 1] != '#' & flag != 2){
        a[x][y] = '^';
        step++;
        goout(a, x, y - 1, 4);
    }
    return;
}
int main()
{
    int n, m;
    cin >> n >> m;
    char a[102][102];
    for(int i = 0; i < 102; i++){
        for(int j = 0; j< 102; j++){
            a[i][j] = '#';
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] == 'S'){
                starti = i;
                startj = j;
            }
            if(a[i][j] == 'T'){
                endi = i;
                endj = j;
            }
        }
    }
    goout(a, starti, startj, 0);
    for(int i = 0; i <= n + 1; i++){
        for(int j = 0; j <= m + 1; j++){
            //cout << a[i][j];
        }
        //cout << endl;
    }
    cout << step << endl;
    return 0;
}

