#include<iostream>
using namespace std;
int issame(int a[], int n){
    for(int i = 0; i <= n; i++){
        if (a[i] == i)
            return i;
        
    }
    return 101;
}
int main(){
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m = issame (a, n);
    if (m == 101)
        cout << "N" << endl;
    else
        cout << issame (a, n) << endl;
    return 0;
}
