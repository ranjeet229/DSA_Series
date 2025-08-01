#include<bits/stdc++.h>
using namespace std;

//Ques 1:- Topological sort algorithm...>

void dfs(int node, int vis[], stack<int> &st, vector<int> adj[]){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it, vis, st, adj);
        }
    }
    st.push(node);
}

vector<int> toposort(int v, vector<int> adj[]){
    int vis[v] = {0};
    stack<int> st;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i, vis, st, adj);
        }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

// Ques 2: - Topo sort using bfs / kahn's algorithm ....>>>

vector<int> toposort(int V, vector<vector<int>> edges){
        // Step 1: Build adjacency list
        vector<int> adj[V];
        for(auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }

        // Step 2: Calculate indegree
        vector<int> indegree(V, 0);
        for(int i = 0; i < V; i++) {
            for(auto it : adj[i]) {
                indegree[it]++;
            }
        }

        // Step 3: Push nodes with indegree 0 into queue
        queue<int> q;
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        // Step 4: Kahn's algorithm
        vector<int> topo;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            
            for(auto it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0)
                    q.push(it);
            }
        }

        return topo;
 }
// ques 3:- Detect a cycle in directed greaph using bfs 
bool isCycllic(int v, vector<int> adj[]){
    int indegree[v] = {0};
    for(int i=0;i<v;i++){
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i] ==0){
            q.push(i);
        }
    }
    int cnt =0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cnt++;
        //node is in your topo sort
        //so please remove it form the indegree

        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0) q.push(it);
        }
    }
    if(cnt == v) return false;
    return true;
}
// ques 4:- course schedule I and II

//course I:-

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int N= numCourses;
        vector<vector<int>> adj(N);
        for(auto& it : prerequisites){
            int u=it[1];
            int v=it[0];
            adj[u].push_back(v);
        }
        vector<int>indegree(N,0);
        for(int i=0;i<N;i++){
            for(auto& it : adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<N;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(auto it : adj[node]){
                indegree[it]--;

                if(indegree[it] == 0) q.push(it); 
            }
        }
        if(topo.size() == N) return true;
        return false;
    }
//course II:- return the order value and  pair order is reversed in this case 

 vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int N= numCourses;
        vector<vector<int>> adj(N);
        for(auto& it : prerequisites){
            int u=it[1];
            int v=it[0];
            adj[u].push_back(v);
        }
        vector<int>indegree(N,0);
        for(int i=0;i<N;i++){
            for(auto& it : adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<N;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(auto it : adj[node]){
                indegree[it]--;

                if(indegree[it] == 0) q.push(it); 
            }
        }
        if(topo.size() == N) return topo;
        return {};
    }

