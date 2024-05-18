// Graph Representation Using Vector (Linked List Representaiton) using vector

#include<bits/stdc++.h>

using namespace std;

int main() {

    int vertex , edges ; 

    cout << "Enter The Number of Vertex and Edges\n";

    cin >> vertex >> edges ;

    vector< int > adjL[vertex];

    int u , v ;

    for(int i = 0 ; i < edges; i ++) {

        cin >> u >> v ;

        adjL[u].push_back(v);

        adjL[v].push_back(u);

    }

    cout << "LinkList Representation Of Graph is ->: "  << endl;

    for(int i = 0; i < vertex ; i ++)  {

        cout << i << " -> " ;

        for(int j = 0; j < adjL[i].size(); j++)  {

            cout << adjL[i][j] << "  ";

        }

        cout << endl ;

    }
}
