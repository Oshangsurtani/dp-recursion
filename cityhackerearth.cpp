#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
/*baad me bataya hai */int size[N];
void make(int v){
parent[v]=v;
size[v]=1;
}

int find(int v){
    if(v==parent[v])return v;
   //pehle yeh tha  return find(parent[v] );
//path compression 
return parent [v]=find (parent[v]);

}

void Union(int a, int b){
    a= find(a);
    b=find(b);
    if(a!=b){
        //union by size
        if(size[a]<size[b])
        swap(a,b);
        parent[b]=a;
        size[a]+=size[b];
    }
}
//o(alpha(n)) reverse akerman function cp algorithm par article hai iska 
int main(){int n,k,v;
cin>>n>>k;
for(int i=1;i<=n;i++){
    make(i);
}
while(k--)
{int u;
cin>>u>>v;
Union(u,v);
}
int connected_ct=0;
for(int i=1;i<=n;i++){
    if(find(i)==i){
        connected_ct++;
    }
}
}