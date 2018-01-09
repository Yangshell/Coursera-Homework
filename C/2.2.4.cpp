#include<string.h>
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
char a[100], b[100];
void get(char a[], int n){
    int i = 0;
    while(a[n + i] != '\0'){
        if(a[n + i] == ')' & a[max(n - 1, 0)] == '('){
            a[n + i] = ' ';
            a[n - 1] = ' ';
            return;
        }
        if(a[n + i] == '('){
            get(a, n + i + 1);
        }
        i++;
    }
}
int main(){
    while(scanf("%s",a) != EOF){
        cout << a << endl;
        int i = 0;
        while(a[i] != '\0'){
            if (a[i] == '(' || a[i] == ')'){
                b[i] = a[i];
            }
            else
                b[i] = ' ';
            i++;
        }
        get(b, 0);
        i = 0;
        while(b[i] != '\0'){
            if(b[i] == '(')
                b[i] = '$';
            if(b[i] == ')')
                b[i] = '?';
            i++;
        }
        cout << b << endl;
    }
    return 0;
}
