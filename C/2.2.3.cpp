#include<string.h>
#include<iostream>
using namespace std;
char a[100], m, f;
int b[50][2], t = 0;
void get(char a[],int i){
    if (a[i] == ' '){
        get (a, i + 1);
    }
    if (a[i] == m){
        int j = 1;
        while(a[i + j] != m){
            if (a[i + j] == f){
                //cout << i << ' ' << i + j << endl;
                b [t][0] = i;
                b [t][1] = i + j;
                t++;
                a[i] = ' ';
                a[i + j] = ' ';
                get (a, 0);
            }
            j++;
        }
        if (a[i + j] == m){
            get (a, i + 1);
        }
    }
}
int main(){
    cin >> a;
    m = a[0], f = a[0];
    int i = 0;
    while (a[i] != '\0'){
        if (a[i] != m){
            f = a[i];
            break;
        }
        i++;
    }
    get(a, 0);
    for (int i = 0; i <= t; i++)
        for (int j = i; j <= t; j++){
            if (b[i][1] > b[j][1]){
                int temp = b[i][1];
                b[i][1] = b[j][1];
                b[j][1] = temp;
                temp = b[i][0];
                b[i][0] = b[j][0];
                b[j][0] = temp;
            }
        }
    for (int i = 1; i <= t; i++){
        cout << b[i][0] << ' ' << b[i][1] << endl;
    }
    return 0;
}