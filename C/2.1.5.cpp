#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100][5];
    for (int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        a[i][3] = a[i][2] - a[i][1];
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i][3] < a[j][3]){
                int temp = a[i][3];
                a[i][3] = a[j][3];
                a[j][3] = temp;
                temp = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = temp;
            }
        }
    }
    int maxgap = 0, maxgapadress = 0;
    for (int i = 0; i < n - 1; i++){
        if (a[i][3] - a[i+1][3] > maxgap){
            maxgap = a[i][3] - a[i+1][3];
            maxgapadress = i;
        }
    }
    cout << maxgapadress + 1 << endl;
    for (int i = maxgapadress; i >= 0; i--){
        cout << a[i][0] << endl;
    }
    cout << n - maxgapadress - 1 << endl;
    for (int i = n - 1; i > maxgapadress; i--){
        cout << a[i][0] << endl;
    }
}
