#include <iostream>
using namespace std;
 
const int INF = 987654321;
int N;
int W[17][17];
int dp[16][1<<16];
 
int TSP(int curr, int visited){
    int result;
    int ret = dp[curr][visited];
    if(ret!=0)
        return ret;
    if(visited==((1<<N)-1)){
        if(W[curr][0]!=0)
            return W[curr][0];
        return INF;
    }
 
    ret=INF;
    for(int i=0; i<N;i++){
        if(W[curr][i]==0 || (visited&(1<<i))) 
        ret = min(ret,W[curr][i]+TSP(i,visited|1<<i)); 
    }
    dp[curr][visited]=ret;
    return ret;
}
 
int main(void){
    cin>>N;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin>>W[i][j];
 
    cout<<TSP(0,1);
}