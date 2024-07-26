#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>bfs;
        queue<int>q;
        q.push(0);
        int vis[V]={0};
        vis[0]=1;
        while(!q.empty()){
            int n = q.front();
            q.pop();
            bfs.push_back(n);
            for(auto it:adj[n]){
                if(!vis[it]){
                     vis[it] = 1;
                    q.push(it);
                   
                }
            }
        }
        return bfs;
    }
};
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>  E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
