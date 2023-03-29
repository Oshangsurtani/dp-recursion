#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int depth[N],height[N];

int dfs(int vertex,int par=0){
    //take axtion on vertex after entering thr vertex
    for(int child:g[vertex]){
        if(child==par)continue;
        depth[child]=depth[vertex]+1;
        //take axtions on child before entering the the choild nofe
        dfs(child,vertex);
        height[vertex]=max(height[vertex],height[child]+1);
        // take actioons on child node after exiting  the child node 
    }
    //take actions on vertex before exiting the vertex
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back;
        g[y].push_back;
    }
    dfs(1);
    for(int i=0;i<=n;i++){
        cout<<depth[i]<<" "<<height[i]<<endl;
    }
}
