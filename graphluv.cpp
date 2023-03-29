#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int graph[N]{N};
vector<pair<int,int>>graph2[N];
int main (){
    int t;
     cin>> t;
    while(t--) {
        int n,m ;
        cin>>n,m ;
        for(int i =0;i<m;i++){
            int v1,v2,wt;
            cin>>v1>>v2>>w ;
            graph[v1][v2]=1;
            graph[v2][v1]=1;
     //for adjacent to store more 
            graph2[v1].push_back({v2,wt});
            graph2.push_back({v1,wt}); 

//0(n^2) space complexity
//max continuous array limit maximum 10^6 to 10^8; usse bada nhi      

if(graph[i][j]==1){
     //connected i love you i love i dont know what to when meet for the first time i wonder what to do i love 
}
graph1[i][j]
//for secinf case complexity more
for(pair<int,int> child:graph2[i]){
    if(child.first==j){
        //connected
        child.second;

    }
}
        }
    }
}