#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int subtree_sum[N];
int val[N];
vector<int>g[N];
void dfs(int vertex,int par=0){
    subtree_sum[vertex]+=val[vertex];
    if(val[vertex]%2==0)even_ct[v]++; 
for(int child : g[vertex]){
    if(child==par)continue;
    depth[child]=depth[vertex]+1;
    dfs(child,vertex);
}
}
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int q;
    while(q--){
        int v;
        cin>>v;
        cout<<subtree_sum[v];<<" "<<even_ct[v];<<endl;
    }
}