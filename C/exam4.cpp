#include<iostream>
using namespace std;

int main()
{
    int n, a[101] = {101};
    for(int i = 0; i < 101; i++)
        a[i] = -1;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        if(y > a[x]){
            a[x] = y;
        }
    }
    for(int i = 0; i < 101; i++){
        if(a[i] >= 0){
            for(int j = i + 1; j < 101; j++){
                if(a[j] >= a[i]){
                    a[i] = -1;
                    break;
                }
            }
        }
    }
    int flag = 0;
    for(int i = 0; i < 101; i++){
        if(a[i] >= 0){
            if(flag){
                cout << ',';
            }
            cout << '(' << i << ',' << a[i] << ')';
            flag++;
        }
    }
    cout << endl;
    return 0;
}

