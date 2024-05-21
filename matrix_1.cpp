#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    //storing ggraph as adj matrix

    int n,m;
    cin >> n>>m;
    int adj[n][m];
    
    for(int i=0;i<=m;m++){
        for(int j=0;j<=n;j++){
            int u,v;
            cin >> u>>v;
            adj[u][v]=1;
            adj[v][u]=1;
        }
    }
    
    //storing with list
    vector<int> adj1[n];
    for(int i=0;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj1[u].push_back(v);
        adj1[v].push_back(u);

    }

    return 0;
}