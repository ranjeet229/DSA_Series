
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n,m ;
//     cin>>n>>m;
//     //sotre graph here
//     // int adj[n+1][m+1]; //it means it is 1 based indexing
//     // for(int i=0;i<m;i++){
//     //     int u, v;
//     //     cin>>u>>v;
//     //     adj[u][v]=1;
//     //     adj[v][u]=1;
//     // }
//     //in the above matrix there is space complexity of O(n^2) which comes in picture of vector<in> adj[n+1] //list.....>>>

//     vector<int> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u, v;
//         cin>>u>>v;
//            //if there is directed graph from u ---> v
//         //no need of second line  and space complexity is O(E) e->no. of edges 
//         adj[u].push_back(v);
     
//         //adj[v].push_back(u);
//     }
    
// }

//Ques:- Traversal technique in graph using bfs ....>>>
#include <vector>
#include <queue>
using namespace std;

vector<int> bfsOfGraph(int v, vector<int> adj[]) {
    vector<int> bfs;
    vector<int> vis(v, 0);
    queue<int> q;

    vis[0] = 1;
    q.push(0);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adj[node]) {
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}
