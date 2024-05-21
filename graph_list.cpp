#include<iostream>
#include<vector>
using namespace std;
// taking input of graph usning adjecency mtrix
int main(){
    int n,m;
    // for 1 based graph
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
       
    }
  
    return 0;
}