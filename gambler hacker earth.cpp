#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int parent[N];
multiset<int>sizes;

/*baad me bataya hai */int size[N];
void make(int v){
parent[v]=v;
size[v]=1;
sizes.insert(1);
}

int find(int v){
    if(v==parent[v])return v;
   //pehle yeh tha  return find(parent[v] );
//path compression 
return parent [v]=find (parent[v]);

}
void merge(int a ,int b)
{
    //sizes.erase(size[a]);//dletes all value similar to size[a] like if size[a]=1 deletes all 1
    sizes.erase(sizes.find(size[a]));
    sizes.erase(sizes.find(size[b]));
    sizes.insert(size[a] + size[b]);
}

void Union(int a, int b){
    a= find(a);
    b=find(b);
    if(a!=b){
        //union by size
        if(size[a]<size[b])
        swap(a,b);
        parent[b]=a;
        merge(a,b);
        size[a]+=size[b];
    }
}
int main(){
    int n,m;
    cin>> n>>m ;
    vector<pair<int,<pair<int,int>>>edges;
    for(int i=0;i<m;i++){
        int u,v,m;
        cin>>u>>v>>wt;
        edges.push_back({wt,{u,v}});
    }
    sort(edges.begin(),edges.end());

    for(int i=1;i<=n;i++) make(i);
    int total_cost=0;
    for(auto &edge : edges)
{
    int wt=edge.first;
    int u =edge.second.first;
    int v=edge.second.second;
if(find(u)==find(v)) continue;
Union(u,v);
total_cost+=wt;
cout<<u<<" "<<v<,endl;
}
cout<<total_cost<<endl;
}