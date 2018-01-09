#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.get();
    for(int n = 0; n < N; n++){
        char a[260];
        cin.getline(a,260);
        int i = 0;
        while(a[i] != '\0'){
            if(a[i] == 'A')
                cout << 'T';
            else if(a[i] == 'T')
                cout << 'A';
            else if(a[i] == 'G')
                cout << 'C';
            else if(a[i] == 'C')
                cout << 'G';
            i++;
        }
        cout << endl;
    }
    return 0;
}
