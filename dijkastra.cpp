
#include <bits/stdc++.h>
using namespace std;
#define INF 9999

typedef pair<int, int>ipair;

class Graph{
    
    
    int V;
    list<pair<int,int>>*adj;
    public:

    Graph(int V){
        this->V=V;
        adj= new list<ipair>[V];
    }

    void addEdge(int u,int v , int w){
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    void shortestPath(int src){
        priority_queue<ipair, vector<ipair>,greater<ipair> > pq;

        vector<int>dist(V,INF);

        pq.push(make_pair(0,src));
        dist[src]=0;

        while(!pq.empty()){

            int u = pq.top().second;
            pq.pop();

            for(auto i : adj[u]){
                int v= i.first;
                int w= i.second;

                if(dist[v]> (dist[u] + w)){
                    dist[v]=(dist[u] + w);

                    pq.push(make_pair(dist[v],v));
                }
            }


        }

        for(int i=0;i<V;i++){
            printf("%d \t %d\n",i,dist[i]);
        }        

    }
};






int main()
{
    // create the graph given in above figure
    int V = 7;
    Graph g(V);

    
    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 6);
    g.addEdge(1, 3, 5);
    g.addEdge(2, 3, 8);
    g.addEdge(3, 4, 10);
    g.addEdge(3, 5, 15);
    g.addEdge(4, 6, 2);
    g.addEdge(5, 6, 6);
    
    g.shortestPath(0);

    return 0;
}
