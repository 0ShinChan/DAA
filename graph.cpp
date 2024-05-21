#include<iostream>
using namespace std;
// taking input of graph usning adjecency mtrix
int main(){
    int n,m;
    // for 1 based graph
    cin>>n>>m;
    int adj[n+1][m+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
  
    return 0;
}