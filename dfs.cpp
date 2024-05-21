#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    map<int ,bool>visit;
    map<int ,list<int> >adj;
    
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }
    void dfs(int node){

       visit[node]=true;
        cout<< node<<" ";

        list<int>:: iterator i;
        for(i=adj[node].begin(); i!=adj[node].end();i++){
            if(!visit[*i]){
                dfs(*i);
            }
        }


    }
};

int main(){

    graph g;
      
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
 
    // Function call
    g.dfs(2);

    return 0;
 
}