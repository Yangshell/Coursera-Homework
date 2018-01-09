#include<string.h>
#include<iostream>
using namespace std;
void printout(char a[], int i){
    if(a[i]==' ')
        cout << ' ';
    else if(a[i]!=' '&&a[i]!='\0'){
        printout(a, i + 1);
        cout << a[i];
    }
}
int main(){
    char a[500];
    cin.getline(a, 500);
    int i = 0, bi = 0;
    char b[500];
    while(a[i] != '\0'){
        if(a[i] != ' '){
            if(a[i + 1] == ' '){
                b[bi] = a[i];
                printout(b, 0);
                bi = 0;
                memset(b, 0, 500);
            }
            else{
                b[bi] = a[i];
                bi++;
            }
        }
        else{
            if(a[i + 1] == ' '){
                cout << ' ';
            }
            else{
                cout << ' ';
            }
        }
        //cout << a[i];
        i++;
    }
    printout(b, 0);
    cout << endl;
    return 0;
}
