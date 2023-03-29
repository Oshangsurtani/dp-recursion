#include<bits/stdc++.h>
using namespace std;
 const int N=1e5+10;
 int h[N];
vector<int>dp(N,INT_MAX);
 int func(int i,int k){
     if(i==1)return 0;
     if(dp[i]!=INT_MAX){return dp[i];}
     for(int j=1;j<=k;j++){
     if(i>j)
    dp[i]=min(dp[i], func(i-j,k)+abs(h[i]-h[i-j]));
 }
     return dp[i];
 }
     
 
int main(){
    int n,k;
    cin>> n>>k;
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    cout<<func(n,k);

}