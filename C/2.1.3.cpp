#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a[3] = {0}, b[3] = {0};
    for (int id = 1; id <= 3; id++){
        int idnum;
        cin >> idnum;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++){
            char kind;
            double price;
            cin >> kind >> price;
            a[idnum - 1] = a[idnum - 1] + price;
            b[int (kind) - 65] = b[int (kind) - 65] + price;
        }
    }
    for (int i = 0; i < 3; i++){
        cout << i + 1 << " " << fixed << setprecision(2) << a[i] << endl;
    }
    for (int i = 0; i < 3; i++){
        cout << char (65 + i) << " " << fixed << setprecision(2) << b[i] << endl;
    }
    return 0;
}
