#include<bits/stdc++.h>
using namespace std;


void bfs(vector<vector<int>>&adj,vector<int>&visited){
    queue<int> q;
    visited[0]=true;
    q.push(0);

    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";

        for(int neighbour :adj[curr]){
            if(!visited[neighbour]){
                visited[neighbour]=true;
                q.push(neighbour);
            }
        }
    }

}

int main(){
    int vertices =5;
   vector<vector<int> > adj(vertices);
    cout<<"Enter vertices as connected to the edge: "<<endl;
    for(int i=0;i<vertices;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    cout<<"bfs :"<<endl;
    vector<int>visited(vertices,false);
    bfs(adj,visited);


    return 0;
}