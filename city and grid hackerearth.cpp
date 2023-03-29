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
merge()
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
if(sizes.size()==1){
    cout<<0<<endl;
}
else{
    int mn=*(sizes.begin());
    int mx=*(--sizes.end());
    cout<<mx-mn<<endl;
}
}

}