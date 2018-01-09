#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char a[10];
    int m, k;
    cin >> m >> k;
    sprintf(a, "%d", m);
    int t = 0;
    if(m % 19 == 0){
        int i = 0;
        while(a[i] != '\0'){
            if(a[i] == '3')
                t++;
            i++;
        }
        if(t == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
