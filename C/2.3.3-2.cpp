#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.get();
    char a[100000];
    cin.getline(a,100000);
    int i = 0, j = 0, k = 0;
    while(1){
        char b[40] = "";
        int m = 0;
        while(m <= 40){
            if(a[j + m] != ' '){
                b[m] = a[j + m];
            }
            else{
                j = j + m + 1;
                i++;
                break;
            }
            m++;
        }
        k = k + m + 1;
        if(i == 1){
            cout << b;
        }
        else if(k <= 80){
            cout << ' ' << b;
        }
        else{
            cout << endl;
            cout << b;
            k = m;
        }
        if(i == n - 1){
            cout << ' ';
            int t = 0;
            while(a[j + t] != '\0'){
                cout << a[j + t];
                t++;
            }
            
            break;
        }
    }
return 0;
}
