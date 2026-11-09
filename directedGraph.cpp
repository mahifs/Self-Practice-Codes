#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> createDirectedGraph (int V, vector<vector<int>> &edges)
{
    vector<vector<int>> mat(V, vector<int>(V, 0));

    //add each edge to the adjacency matrix
    for (auto &it : edges) {
        int u = it[0];
        int v = it[1];
        mat[u][v] = 1;
    }

    return mat;
}

int main()
{
    int V = 3;

    //List of edges (u, v)
    vector<vector<int>> edges = {{1, 0}, {2, 0}, {1, 2}};

    //Build the graph using edges
    vector<vector<int>> mat = createDirectedGraph(V, edges);

    cout << "Adjacency Matrix Representation: " << endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}