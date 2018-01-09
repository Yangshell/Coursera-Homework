#include<string.h>
#include<iostream>
using namespace std;
int n;
int calculate(int n){
    if(n == 1){
        cout << "End" << endl;
        return 0;
    }
    if(n % 2 == 1){
        cout << n << "*3+1=" << n * 3 + 1 << endl;
        calculate(n * 3 + 1);
    }
    else{
        cout << n << "/2=" << n / 2 << endl;
        calculate(n / 2);
    }
    return 0;
}
int main(){
    cin >> n;
    calculate(n);
    return 0;
}
