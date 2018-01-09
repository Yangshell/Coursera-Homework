#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int row, col, a[100][100];
    cin >> row >> col;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> a[i][j];
        }
    }
    for(int d= 0; d < col; d++){
        for(int j = 0; j <= d ; j++){
            if(j < row & d - j < col){
                cout << a[j][d - j] << endl;
            }
        }
    }
    for(int d = col; d < col + row - 1; d++){
        for(int j =  d - col + 1; j < row; j++){
            if(j < row & d - j < col & j >= 0 & d - j >= 0){
                cout << a[j][d - j] << endl;
            }
        }
    }
    return 0;
}
