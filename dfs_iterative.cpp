#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    map<int ,bool>visit;
    map<int ,list<int> >adj;
    
    void addEdge(int u,int v){
        adj[u].push_back(v);
    }

    void dfs(int s){
        vector<int> visited(4,false);
        stack<int> st;
        
        st.push(s);
        
        while(!st.empty()){
            s=st.top();
            st.pop();

            if(!visited[s]){
                visited[s]=true;
                cout<<s<<" ";

            }
            for(auto i : adj[s]){
                if(!visited[i]){
                    st.push(i);
                }
            }
        }
    }
};

int main(){

    graph g;
      
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    
    g.addEdge(2, 3);
    
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
 
    // Function call
    g.dfs(0);

    return 0;
 
}