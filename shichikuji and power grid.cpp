#include<bits/stdc++.h>
using namespace std;
const int N=2e3+10;
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
    cin>> n ;
    vector<pair<int,int>>cities(n+1);
    for(int i=0;i<n;i++){
        cin>>citied[i].first>>citites[i].second;
    }
    vector<int>c(n+1),k(n+1);
    for(int i=1;i<=n;++i){
        cin>>c[i];
    }
    for(int j=1;j<=n;j++){
        cin>>k[j];
    }


    vector<pair<int,<pair<int,int>>>edges;
   for(int i=1;i<=n;i++){
    edges.push_back({c[i], {0,i}});
   }
   for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        int dist = abs(cities[i].first - cities[j].first) + abs(cities[i].second - cities[j].second);
    long long cost=dist*1ll*(k[i]+k[j]);
    edges.push_back(cost, {i,j}); 
    }
   }

    sort(edges.begin(),edges.end());

    for(int i=1;i<=n;i++) make(i);
    long long total_cost=0;
    vector<int>power_stations;
    vector<pair<int,int>>connections;
    
    for(auto &edge : edges)
{
    int wt=edge.first;
    int u =edge.second.first;
    int v=edge.second.second;
if(find(u)==find(v)) continue;
Union(u,v);
total_cost+=wt;
if(u==0||v==0){
    power_stations.push_back(max(u,v));
}
else{connections.push_back({u,v});}
}
cout<<total_cost<<endl;
cout<<power_stations.size()<<endl;
for(int station :power_stations){
    cout<<stations<<" ";}
    cout<<endl;
    cout<<connection.size()<<endl;
    for(auto &connection:connections){
        cout<<connection.first<<" "<<connection.second<<endl;
    }
}

