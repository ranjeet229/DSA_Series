
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

//Ques:- Traversal technique in graph using dfs ....>>>

void dfs(int node, vector<int> adj[],int vis[], vector<int> &ls){
    vis[node]=1;
    ls.push_back(node);
    //traverse all its neighbours
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj, vis, ls);
        }
    }
}

vector<int> dfsOfGraph(int v, vector<int> adj[]){
    int vis[v]={0};
    int start=0; 
    vector<int> ls;
    dfs(start, adj, vis, ls);
    return ls;
}

//Ques 2:-Number of Proviences.....>>>> mean number of parts of a single graph
void dfs(int node, vector<int>  adjLs[],int vis[]){
    vis[node]=1;
    for(auto it : adjLs[node]){
        if(!vis[it]){
            dfs(it, adjLs, vis);
        }
    }
}
int numProvinces(vector<vector<int>> adj, int v){
    vector<int> adjLs[v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(adj[i][j] == 1 && i!=j){
                adjLs[i].push_back(j);
                adjLs[j].push_back(i);
            }
        }
    }
    int vis[v] = {0};
    int cnt=0;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            cnt++;
            dfs(i, adjLs, vis);
        }
    }
    return cnt;
}

//....>>>
//ques 4: Rotten Oranges....>>
int orangesRotting(vector<vector<int>>& grid){
    int n =grid.size();
    int m=grid[0].size();

    //{{row,col} , time}
    queue<pair<pair<int, int> , int>> q;
    vector<vector<int>> vis(n, vector<int>(m, 0)); //visted array 2 matrix

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){ //means it rotten 
                q.push({{i, j}, 0});
                vis[i][j]=2; //intially marked as 2 in visted array
            }
            else{
                vis[i][j] = 0;
            }
        }
    }
    int tm=0;
    int drow[]={-1,0,1,0};
    int dcol[]={0,1,0,-1};
    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        tm=max(tm, t);
        q.pop();
        for(int i=0;i<4;i++){
            int nrow=r + drow[i];
            int ncol=c + dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&vis[nrow][ncol]!=2
            &&grid[nrow][ncol] == 1){
                q.push({{nrow, ncol}, t+1});
                vis[nrow][ncol] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j] !=2 && grid[i][j] == 1){
                return -1;
            }
        }
    }
    return tm;
}

//FLood Fill algorithm......>>>>
//sr means starting row and sc means starting column....>>>

void dfs(int row, int col,vector<vector<int>>&ans,
    vector<vector<int>>& image, int newColor, int delRow[], int delCol[], int initColor){
     ans[row][col]=newColor;
     int n=image.size();
     int m=image[0].size();
    for(int i=0;i<4;i++){
        int nrow=row+delRow[i];
        int ncol=col+delCol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
        image[nrow][ncol] == initColor &&ans[nrow][ncol] != newColor){
            dfs(nrow, ncol,ans, image, newColor, delRow, delCol, initColor);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor){
    int initColor=image[sr][sc];
    vector<vector<int>> ans=image;
    int delRow[]={-1,0,1,0};
    int delCol[]={0,1,0,-1};
    dfs(sr,sc,ans,image,newColor,delRow, delCol,initColor);
    return ans;
}

//Ques-11:-Detect a cycle in an undirected graph using Bfs......>>>>>
bool detect(int src, vector<int> adj[],int vis[]){
    vis[src]=1;
    queue<pair<int,int>>q;
    q.push({src, -1});
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();

        for(auto adjNode :adj[node]){
            if(!vis[adjNode]){
                vis[adjNode]=1;
                q.push({adjNode, node});
            }
            else if(parent != adjNode){
                return true;
            }
        }
    }
    return false;
}
bool isCycle(int v, vector<vector<int>> &edges){
    vector<int> adj[v];

    for(auto &edge : edges){
        int u = edge[0];
        int vtx = edge[1];
        adj[u].push_back(vtx);
        adj[vtx].push_back(u);
    }
    int vis[v]={0};
    for(int i=0;i<v;i++){
        if(!vis[i]){
            if(detect(i,adj,vis)) return true;
        }
    }
    return false;
}

//Ques 12: Detect a cycle in a directed graph using dfs......>>>
bool dfs(int node, int parent, vector<int> &vis, vector<int> adj[]) {
    vis[node] = 1;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            if (dfs(it, node, vis, adj))
                return true;
        } else {
            if (it != parent)
                return true;
        }
    }
    return false;
}

bool isCycle(int v, vector<int> adj[]){
    vector<int> vis(v ,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
            if(dfs(i, -1 , vis, adj) == true) return true;
        }
    }
    return false;
}

//ques 13:- Distance of the nearest call having 1......>>>>>

vector<vector<int>> nearest(vector<vector<int>> grid){
    int n=grid.size();
    int m=grid[0].size();

    vector<vector<int>> vis(n, vector<int>(m,0));
    vector<vector<int>> dist(n , vector<int>(m,0));

    queue<pair<pair<int, int> , int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] == 1){
                q.push({{i,j} , 0});
                vis[i][j]=1;
            }else{
                vis[i][j] =0;
            }
        }
    }
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    while(!q.empty()){
        int row = q.front().first.first;
        int col=q.front().first.second;
        int steps=q.front().second;

        q.pop();
        dist[row][col] = steps;

        for(int i=0;i<4;i++){
            int nrow= row+ delrow[i];
            int ncol=col + delcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol] == 0){
                vis[nrow][ncol] == 1;
                q.push({{nrow, ncol} , steps+1});
            }
        }
    }
    return dist;
}

//NUmber of enclaves ......>>using bfs

int numberOfEnclaves(vector<vector<int>> grid){
    queue<pair<int, int>> q;
    int n=grid.size();
    int m=grid[0].size();

    int vis[n][m] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i ==0 || j== 0 || i == n-1 || j == m-1 ){
                if(grid[i][j] == 1){
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            } 
        }  
    }
    int delrow[] = {-1,0,1,0};
    int delcol[] = {0,1,0,-1};

    while(!q.empty()){
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        //traverse all 4 direction 
        for(int i =0; i<4 ;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if(nrow>=0 && nrow < n && ncol >= 0 && ncol < m &&
            vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1 ){
                q.push({nrow, ncol});
                vis[nrow][ncol] = 1;
            }
        }
        int cnt=0;
        if(int i=0;i<n; i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == 1 && vis[i][j] ) cnt++;
            }
        }
        return cnt;
    }

}


