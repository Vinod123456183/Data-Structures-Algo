// Graph Using AdjMatrix

#include<bits/stdc++.h>

using namespace std;

int main() {

    int vertex , edges ; 

    cout << "Enter The Number of Vertex and Edges\n";

    cin >> vertex >> edges ;

    vector<vector<int>>AdjM(vertex , vector<int>(vertex , 0));

    int u , v ;

    for(int i = 0 ; i <edges ;i ++)  {

        cin >> u >> v ;

        AdjM[u][v] = AdjM[v][u] = 1;

    }
    cout << "Graph Representation Using Adjacency Matrix - " << endl ;

    for(int i = 0; i < vertex ; i ++)  {

        for(int j = 0 ; j < vertex ; j++)  {

            cout << AdjM[i][j] << "  ";

        }

        cout  << endl;

    }

}
