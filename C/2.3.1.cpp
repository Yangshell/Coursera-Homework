#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t, m, n, a[100][100];
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> m >> n;
        for(int x = 0; x < m; x++){
            for(int y = 0; y < n; y++){
                cin >> a[x][y];
            }
        }
        int ans = 0;
        if(m == 1){
            for(int i = 0; i < n; i++){
                ans = ans + a[0][i];
            }
        }
        else if(n == 1){
            for(int i = 0; i < m; i++){
                ans = ans + a[i][0];
            }
        }
        else{
            for(int i = 0; i < n; i++){
                ans = ans + a[0][i] + a[m - 1][i];
            }
            for(int i = 1; i < m - 1; i++){
                ans = ans + a[i][0] + a[i][n - 1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
