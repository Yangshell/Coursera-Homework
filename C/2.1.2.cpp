#include<iostream>
using namespace std;
int rightcount(int py, int dt, int t, int hz){
    //A
    if (dt == 1 ^ hz == 4 ^ py == 3){
        //B
        if (hz == 1 ^ dt == 4 ^ py == 2 ^ t == 3){
            //C
            if (hz == 4 ^ dt == 3){
                //D
                if (py == 1 ^ t == 4 ^ hz == 2 ^ dt == 3)
                    return 1;
                else
                    return 0;
            }
            else
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}

int main(){
    for (int a = 1; a <= 4; a++)
        for (int b = 1; b <= 4; b++)
            for (int c = 1; c <= 4; c++)
                for (int d = 1; d <= 4; d++)
                    if (rightcount (a, b, c, d) == 1 && a + b + c + d == 10 && a != c){
                        cout << a << endl;
                        cout << b << endl;
                        cout << c << endl;
                        cout << d << endl;
                    }
    
    return 0;
}
