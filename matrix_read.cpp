#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Graph {
public:
    int V;
    vector<vector<int>> adjMatrix;

    Graph(int vertices) {
        V = vertices;
        adjMatrix = vector<vector<int>>(V, vector<int>(V, 0));
    }

    void readGraphFromFile(string filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return;
        }

        int u, v;
        while (file >> u >> v) {
            addEdge(u, v);
        }

        file.close();
    }

    void addEdge(int u, int v) {
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // For undirected graph
    }

    void printGraph() {
        cout << "Graph Adjacency Matrix:" << endl;
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to find the number of edges in the graph
    int findEdges() {
        int count = 0;
        for (int i = 0; i < V; i++) {
            for (int j = i; j < V; j++) {
                if (adjMatrix[i][j] == 1) {
                    count++;
                }
            }
        }
        return count;
    }

    // Function to find the total degree of the graph
    int totalDegree() {
        int degree[V] = {0};
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                degree[i] += adjMatrix[i][j];
            }
        }
        int sum = 0;
        for (int i = 0; i < V; i++) {
            sum += degree[i];
        }
        return sum;
    }

    // Function to display the adjacent vertices of a given vertex
    void displayAdjacent(int v) {
        cout << "Adjacency list of vertex " << v << endl;
        for (int i = 0; i < V; i++) {
            if (adjMatrix[v][i] == 1) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    int V;
    string filename;

    cout << "Enter the number of vertices: ";
    cin >> V;

    cout << "Enter the graph file name: ";
    cin >> filename;

    Graph graph(V);
    graph.readGraphFromFile(filename);

    cout << "\n";
    graph.printGraph();

    int edges = graph.findEdges();
    cout << "\nNumber of edges in the graph: " << edges << endl;

    int degree = graph.totalDegree();
    cout << "Total degree of the graph: " << degree << endl;

    int vertex;
    cout << "\nEnter a vertex to display its adjacent vertices: ";
    cin >> vertex;

    graph.displayAdjacent(vertex);

    return 0;
}
