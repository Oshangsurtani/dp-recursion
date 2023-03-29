#include<bits/stdc++.h>
using namespace std;
 const int N=1e5+10;
 int h[N];
vector<int>dp(N,INT_MAX);
 int func(int i){
     if(i==1)return 0;
     if(dp[i]!=INT_MAX){return dp[i];}
    dp[i]=min(dp[i], func(i-1)+abs(h[i]-h[i-1]));
    if(i>2)
    dp[i]=min(dp[i],func(i-2)+abs(h[i]-h[i-2]));
     
     return dp[i];
 }