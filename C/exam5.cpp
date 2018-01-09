#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int n,m;
int visited[110][110]; //判重标记,visited[i][j] = true表示i已经扩展过
char a[110][110];
struct Step {
    int i,j; //位置
    int steps; //到达x所需的步数
    Step(int ii,int jj,int s):i(ii),j(jj),steps(s) { }
};
queue<Step> q; //队列,即Open表
int main(){
    cin>>n>>m;
    getchar();
    for(int i=0; i<n; i++)
        cin.getline(a[i],101);
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            if(a[i][j]=='S'){//找起点
                q.push(Step(i,j,0));
                visited[i][j]=1;
            }else if(a[i][j]=='#')
                visited[i][j]=1;
    while(!q.empty()) {
        Step s=q.front();
        if(a[s.i][s.j]=='T') { //找到终点
            cout<<s.steps<<endl;
            return 0;
        } else {
            if(s.i>0&& !visited[s.i-1][s.j]) {
                q.push(Step(s.i-1,s.j,s.steps+1));
                visited[s.i-1][s.j]=1;
            }
            if(s.j>0&& !visited[s.i][s.j-1]) {
                q.push(Step(s.i,s.j-1,s.steps+1));
                visited[s.i][s.j-1]=1;
            }
            if(s.i<n-1&& !visited[s.i+1][s.j] ) {
                q.push(Step(s.i+1,s.j,s.steps+1));
                visited[s.i+1][s.j]=1;
            }
            if(s.j<m-1&& !visited[s.i][s.j+1] ) {
                q.push(Step(s.i,s.j+1,s.steps+1));
                visited[s.i][s.j+1]=1;
            }
            q.pop();
        }
    }
    return 0;
}
