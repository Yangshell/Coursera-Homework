#include<iostream>
#include<iomanip>
using namespace std;
int ansyear, ansmonth, ansday;
int isr(int a){
    if (a % 4 == 0 && a % 100 != 0 ^ a % 400 == 0)
        return 1;
    else
        return 0;
}
void returnmonth(int year, int month, int day){
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 || month == 12){
        if (day <= 31){
            ansmonth = month;
            ansday = day;
        }
        else{
            ansmonth = month + 1;
            ansday = 1;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        if (day <= 30){
            ansmonth = month;
            ansday = day;
        }
        else{
            ansmonth = month +1;
            ansday = 1;
        }
    }
    else{
        if (isr(year)){
            if (day <= 29){
                ansmonth = month;
                ansday = day;
            }
            else{
                ansmonth = month + 1;
                ansday = 1;
            }
        }
        else{
            if ( day <= 28){
                ansmonth = month;
                ansday = day;
            }
            else{
                ansmonth = month + 1;
                ansday = 1;
            }
        }
    }
}
void returnyear(int year, int month){
    if (month <=12){
        ansyear = year;
        ansmonth = month;
    }
    else{
        ansyear = year + 1;
        ansmonth = 1;
    }
    
}
int main(){
    int year, month, day;
    char blank;
    cin >> year >> blank >> month >> blank >> day;
    day = day + 1;
    returnmonth(year, month, day);
    returnyear(year, ansmonth);
    cout << ansyear << "-" << setfill('0') << setw(2) << ansmonth << "-" << setfill('0') << setw(2) << ansday << endl;
    return 0;
}

