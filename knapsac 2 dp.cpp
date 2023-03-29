#include<bits/stdc++.h>
using namespace std;
const int N=105;
const long long W=1e9+10;
//two things changing
long long dp[105][100005] ;
int wt[105],val[1005];
long long func(int ind,int val_left){
    //base case
    if(val_left==0)return 0;
    if(ind<0)return 1e15;
    if(dp[ind][val_left]!=-1)return dp[ind][val_left];
   long long ans= func(ind-1,val_left);
 //unsual things must be avoided
 if(val_left-val[ind]>=0)
  ans=min(ans,  func(ind-1,val_left-val[ind])+wt[ind]);
  return dp[ind][val_left]=ans;
}
int main (){
    memset(dp,-1,sizeof(dp));
     int n,w;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
    int max_value=1e5;
    for(int i=max_value;i>=0;i--){
        if(func(n-1,i)<=w){
        cout<<i<<endl;
    break;}
    }
    }