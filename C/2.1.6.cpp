#include<iostream>
#include<iomanip>
using namespace std;
void goon(int n, char a1[100][100], char a2[100][100]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a2[i][j] = a1[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a1[i][j] == '@'){
                a2[i][j] = '@';
                if (a1[max(i - 1, 0)][j] == '.')
                    a2[max(i - 1, 0)][j] = '@';
                if (a1[i][max(j - 1, 0)] == '.')
                    a2[i][max(j - 1, 0)] = '@';
                if (a1[min(i + 1, n - 1)][j] == '.')
                    a2[min(i + 1, n - 1)][j] = '@';
                if (a1[i][min(j + 1, n - 1)] == '.')
                    a2[i][min(j + 1, n - 1)] = '@';
            }
        }
    }
}
int main(){
    int n, m;
    char a[100][100][100];
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[0][i][j];
        }
    }
    
    cin >> m;
    for (int t = 0; t < m - 1; t++){
        goon(n, a[t], a[t+1]);
    }
    
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[m - 1][i][j] == '@')
                count++;
        }
    }
    cout << count << endl;
}

