#include<iostream>
using namespace std;

int main()
{
    char a[500];
    cin >> a;
    int b[26][3] = {0};
    int i = 0, num = 1;
    while(a[i] != '\0'){
        int x = int(a[i]);
        if((x >= 65 & x <= 90) || (x >= 97 & x <= 122)){
            if(x <= 90){
                b[x - 65][0] = x + 32;
                if(b[x - 65][2] == 0){
                    b[x - 65][1] = num;
                    num++;
                }
                b[x - 65][2]++;
            }
            else{
                b[x - 97][0] = x;
                if(b[x - 97][2] == 0){
                    b[x - 97][1] = num;
                    num++;
                }
                b[x - 97][2]++;
            }
        }
        i++;
    }
    for(int i = 0; i < 26; i++){
        for(int j = i; j < 26; j++){
            if(b[j][2] > b[i][2]){
                int temp = b[i][0];
                b[i][0] = b[j][0];
                b[j][0] = temp;
                temp = b[i][1];
                b[i][1] = b[j][1];
                b[j][1] = temp;
                temp = b[i][2];
                b[i][2] = b[j][2];
                b[j][2] = temp;
            }
        }
    }
    int maxnum = b[0][2];
    int secnum = b[0][2];
    for(int i = 0; i < 26; i++){
        if(maxnum > b[i][2]){
            secnum = b[i][2];
            int minnum = b[i][1], secid = i;
            for(int j = i; j < 26; j++){
                if(b[j][2] == secnum & b[j][1] < minnum){
                    secid = j;
                    minnum = b[j][1];
                }
            }
            cout << char(b[secid][0] - 32) << '+' << char(b[secid][0]) << ':' << b[secid][2] << endl;
            break;
        }
    }
    return 0;
}

