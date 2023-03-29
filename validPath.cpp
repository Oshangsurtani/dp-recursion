class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>v(n, 0);
        queue<int>q;
        q.push(source);
        v[source]=1;
        vector<int>adj[n];
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        while(!q.empty()){
            int pos=q.front();
            q.pop();
            if(pos==destination){return true;}
            for(auto it: adj[pos]){
                if(!v[it]){
                    v[it]=1;
                    q.push(it);
                }
            }
        }
        return false;
    }
};
