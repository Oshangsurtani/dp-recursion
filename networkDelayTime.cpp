class Solution {
public:
int dijktra (int source,int n,vector<pair<int,int>>g[]){//array declaration of vector was needed 
    const int N=1e5 +10;
    const int INF =1e9+10;
    vector <int >vis(N,0);
    vector<int >dist(N,INF);
    set<pair<int,int>>st;
    st.insert({0,source});
    dist[source]=0;
    while(st.size()>0){
        auto node=*st.begin();
        int v=node.second;
        int v_dist =node.first;
        st.erase(st.begin()); 
        if(vis[v])continue;
        vis[v]=1;
         for(auto child : g[v]){
            int child_v=child.first;
            int wt =child.second;
            if(dist[v]+wt<dist[child_v]){
                dist[child_v] = dist[v]+wt;
                st.insert({dist[child_v],child_v});  
            }
         }
    }
    int ans=0;
    for(int i=1;i<=n;++i){// running from 1 to n 
        if(dist[i]==INF)return -1;
        ans=max(ans,dist[i]);
    }
    return ans;
}


    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       const int N=1e5 +10; 
const int INF =1e9+10;
        vector<pair<int,int>>g[N];
        for(auto vec:times){
            g[vec[0]].push_back({vec[1],vec[2]});
        }
        return dijktra(k,n,g);
    }
};
/*class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector <pair<int, int>> adj[n+1];
        for (auto it: times) 
            adj[it[0]].push_back({it[1], it[2]});
        priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        pq.push({0, k});
        vector <int> time(n+1, 1e9);
        time[k] = 0;
        while (!pq.empty()) {
            int t = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for (auto it: adj[node]) {
                int adjNode = it.first;
                int wt = it.second;
                if (t + wt < time[adjNode]) {
                    time[adjNode] = t + wt;
                    pq.push({t + wt, adjNode});
                }
            }
        }
        int minTime = INT_MIN;
        for (int i = 1; i <= n; i++) {
            if (time[i] == 1e9)
                return -1;
            minTime = max (time[i], minTime);    
        }
        return minTime;
    }
};*/

/*
#define pii pair<int, int>
#define maxn 105
#define inf 1000000000

class Solution {
public:
    vector<pii>g[maxn];
    int dis[maxn];

    void dijkstra(int s)
    {
        priority_queue<pii, vector<pii>, greater<pii>> q;
        for(int i=0; i<maxn; i++) dis[i] = inf;
        dis[s] = 0;
        q.push({0, s});
        while(!q.empty()) {
            int u = q.top().second;
            q.pop();
            for(int i=0; i<g[u].size(); i++) {
                int v = g[u][i].first;
                int w = g[u][i].second;
                if(dis[u] + w < dis[v]) {
                    dis[v] = dis[u] + w;
                    q.push({dis[v], v});
                }
            }
        }
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for(auto x: times) {
            int u = x[0];
            int v = x[1];
            int w = x[2];
            g[u].push_back({v, w});
        }

        dijkstra(k);

        int ans = 0;
        for(int i=1; i<=n; i++) ans = max(ans, dis[i]);
        if(ans == inf) ans = -1;
        return ans;    
    }
};*/