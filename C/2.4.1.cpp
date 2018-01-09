#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    double m;
    cin >> n >> m;
    double a[50][2];
    int j = 0;
    double x = 0, y = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(y >= m){
            
            a[j][0] = x;
            a[j][1] = y;
            j++;
        }
        x = 0;
        y = 0;
    }
    n = j;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(a[j][1] > a[i][1]){
                double temp = a[i][1];
                a[i][1] = a[j][1];
                a[j][1] = temp;
                temp = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = temp;
            }
        }
    }
    if(n == 0){
        cout << "None." << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            printf("%03d %.1f\n",int(a[i][0]),a[i][1]);
        }
    }
    return 0;
}
