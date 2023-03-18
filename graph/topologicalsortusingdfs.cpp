#include <bits/stdc++.h> 

void toposort(unordered_map<int,bool> &visited,int i,unordered_map<int,list<int>> &adj,stack<int>&s){
    visited[i]=1;
    for(auto neighbour:adj[i]){
        if(!visited[neighbour]){
            toposort(visited,neighbour,adj,s);
        }
    }
    s.push(i);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    stack<int>s;
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    unordered_map<int,bool> visited;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            toposort(visited,i,adj,s);
        }
    }
    vector<int>ans;
    for(int i=0;i<s.size();i++){
        int a=s.top();
        s.pop();
        ans.push_back(a);
    }
    
}