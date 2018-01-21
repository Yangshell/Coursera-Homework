#include <iostream>
#include "stdio.h"
using namespace std;
class Headquarter {
public:
    int life;
    int nDemon;
    int nDragon;
    int nNinja;
    int nIceman;
    int nLion;
    int nWolf;
    int flag;
    Headquarter(int n, int m = 0, int f = 1): life(n), nDemon(m), nDragon(m), nNinja(m), nIceman(m), nLion(m), nWolf(m), flag(f){ }
    Headquarter(const Headquarter& a): life(a.life), nDemon(a.nDemon), nDragon(a.nDragon), nNinja(a.nNinja), nIceman(a.nIceman), nLion(a.nLion), nWolf(a.nWolf), flag(a.flag){ }
};
int Min(int a[5]){
    int minnum = 100;
    for(int i = 0; i < 5; i++){
        if(a[i] < minnum)
            minnum = a[i];
    }
    return minnum;
}
int main() {
    int Case;
    cin >> Case;
    for(int Casei = 1; Casei <= Case; Casei++){
        cout << "Case:" << Casei << endl;
        int Life;
        cin >> Life;
        Headquarter Blue(Life);
        Headquarter Red = Blue;
        int LifeDragon, LifeNinja, LifeIceman, LifeLion, LifeWolf;
        cin >> LifeDragon >> LifeNinja >> LifeIceman >> LifeLion >> LifeWolf;
        int listRed[5] = {2, 3, 4, 1, 0}, listBlue[5] = {3, 0, 1, 2, 4}, listLife[5] = {LifeDragon, LifeNinja, LifeIceman, LifeLion, LifeWolf}, listNum[5] = {0};
        char listName[5][10] = {"dragon", "ninja", "iceman", "lion", "wolf"};
        int bothzero = 3, flagRed = 0, flagBlue = 0, blueover = 1, redover = 1, time = 0;
        int minlistlife = Min(listLife);
        if(Blue.life < minlistlife && Red.life < minlistlife){
            printf("%03d red headquarter stops making warriors\n",time);
            printf("%03d blue headquarter stops making warriors\n",time);
            bothzero = 0;
        }
        while(bothzero){
            
            if(Red.life < minlistlife && redover){
                printf("%03d red headquarter stops making warriors\n",time);
                bothzero = 2;
                redover = 0;
            }
            
            for(int i = flagRed; bothzero != 2; i++){
                if(Red.life >= listLife[listRed[i%5]]){
                    Red.nDemon++;
                    Red.life = Red.life - listLife[listRed[i%5]];
                    listNum[listRed[i%5]]++;
                    printf("%03d red %s %d born with strength %d,", time, listName[listRed[i%5]], Red.nDemon, listLife[listRed[i%5]]);
                    if(listRed[i%5] == 0){
                        Red.nDragon++;
                        printf("%d %s in red headquarter\n", Red.nDragon, listName[listRed[i%5]]);
                    }
                    else if(listRed[i%5] == 1){
                        Red.nNinja++;
                        printf("%d %s in red headquarter\n", Red.nNinja, listName[listRed[i%5]]);
                    }
                    else if(listRed[i%5] == 2){
                        Red.nIceman++;
                        printf("%d %s in red headquarter\n", Red.nIceman, listName[listRed[i%5]]);
                    }
                    else if(listRed[i%5] == 3){
                        Red.nLion++;
                        printf("%d %s in red headquarter\n", Red.nLion, listName[listRed[i%5]]);
                    }
                    else if(listRed[i%5] == 4){
                        Red.nWolf++;
                        printf("%d %s in red headquarter\n", Red.nWolf, listName[listRed[i%5]]);
                    }
                    flagRed = i + 1;
                    break;
                }
            }
            
            if(Blue.life < minlistlife && blueover){
                printf("%03d blue headquarter stops making warriors\n",time);
                bothzero = 1;
                blueover = 0;
            }
            
            for(int i = flagBlue; bothzero != 1; i++){
                if(Blue.life >= listLife[listBlue[i%5]]){
                    Blue.nDemon++;
                    Blue.life = Blue.life - listLife[listBlue[i%5]];
                    listNum[listBlue[i%5]]++;
                    printf("%03d blue %s %d born with strength %d,", time, listName[listBlue[i%5]], Blue.nDemon, listLife[listBlue[i%5]]);
                    if(listBlue[i%5] == 0){
                        Blue.nDragon++;
                        printf("%d %s in blue headquarter\n", Blue.nDragon, listName[listBlue[i%5]]);
                    }
                    else if(listBlue[i%5] == 1){
                        Blue.nNinja++;
                        printf("%d %s in blue headquarter\n", Blue.nNinja, listName[listBlue[i%5]]);
                    }
                    else if(listBlue[i%5] == 2){
                        Blue.nIceman++;
                        printf("%d %s in blue headquarter\n", Blue.nIceman, listName[listBlue[i%5]]);
                    }
                    else if(listBlue[i%5] == 3){
                        Blue.nLion++;
                        printf("%d %s in blue headquarter\n", Blue.nLion, listName[listBlue[i%5]]);
                    }
                    else if(listBlue[i%5] == 4){
                        Blue.nWolf++;
                        printf("%d %s in blue headquarter\n", Blue.nWolf, listName[listBlue[i%5]]);
                    }
                    flagBlue = i + 1;
                    break;
                }
            }
            time++;
            if(Blue.life < minlistlife && Red.life < minlistlife){
                if(bothzero == 3){
                    printf("%03d red headquarter stops making warriors\n",time);
                    printf("%03d blue headquarter stops making warriors\n",time);
                }
                if(bothzero == 1){
                    printf("%03d red headquarter stops making warriors\n",time);
                }
                if(bothzero == 2){
                    printf("%03d blue headquarter stops making warriors\n",time);
                }
                bothzero = 0;
            }
        }
        //cout << Min(listLife) << endl;
        //cout << Red.life << " " << Red.nDragon << endl;
    }
    return 0;
}
