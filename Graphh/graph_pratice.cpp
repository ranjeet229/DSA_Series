
#include<bits/stdc++.h>
using namespace std;

//Word ladder i

int WordLadder(string startword, string endword, vector<string>&wordlist){
    queue<pair<int>> q;
    q.push({startword, 1});
    unodered_set<string> st(wordlist.begin(), wordlist.end());
    st.erase(startword);

    while(!q.empty()){
        string word = q.front().first;
        int steps =   q.front().second;
        q.pop();
        if(word == endword) return steps;

        for(int i=0;i<word.size();i++){
            char original = word[i];
            for(char ch ='a';ch<='z';ch++){
                word[i]=ch;

                //if it exist
                if(st.find(word)!= st.end()){
                    st.erase(word);
                    q.push({word, steps+1})
                }
            }
            word[i] = original;
        }
    }
    return 0;
}

//NUmber of island- number of connected components in matrix

void bfs(int row, int col, vector<vector<int>>&vis, vector<vector<char>>&grid){
    vis[row][col] = 1;
    queue<pair<int,int>>q;
    q.push({row, col});
    int n = grid.size();
    int m = grid[0].size();

    while(!q.empty()){
        int row=q.front().first;
        int col =q.front().second;
        q.pop();

        //traverse in the neighbours and marks them if  its a land 

        for(int delrow =-1; delrow<=1;delrow++){
            for(int delcol = -1; delcol<=1;delcol++){
                int nrow = row+delrow;
                int ncol = col+delcol;
                if(nrow>= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1'&& !vis[nrow][ncol]){
                    vis[nrow][ncol] =1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
}

int numIslands(vector<vector<char>> & grid){
    int n =grid.size();
    int m = grid[0].size();
    vector<vector<int>> vis(n, vector<int>(m,0));
    int cnt=0;
    for(int row=0;row<n;row++){
        for(int col =0;col<m;col++){
            if(!vis[row][col] && grid[row][col] =='1'){
                cnt++;
                bfs(row, col, vis, grid);
            }
        }
    }
    return cnt;
}

// Bipartite Graph ->> the graph the with adjacent color different is called bipartite graph

bool dfs(int node, int col, int color[], vector<int> adj[]){
    color[node] =col;

    for(auto it : adj[node]){
        if(color[it] == -1){
            if(dfs(it, !col, color, adj) == false) return false;
        }
        else if(color[it] ==col){
            return false;
        }
    }
    return true
}


bool isBipartite(int v, vector<int>adj[]){
    int color[v];
    for(int i=0;i<v;i++){
        color[i] =-1;
    }
    for(int i=0;i<v;i++){
        if(color[i] == -1){
            if(dfs(i, 0, color, adj) == false){
                return false;
            }
        }
    }
}

