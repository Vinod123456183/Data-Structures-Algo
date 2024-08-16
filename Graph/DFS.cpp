#include <iostream>
#include <vector>

using namespace std;

// Function to perform DFS traversal of the graph
void dfs(int node, vector<int> adjLs[], vector<bool> &vis, vector<int> &ans) {
    vis[node] = true;
    ans.push_back(node);  // Record the visited node
    for (int neighbor : adjLs[node]) {
        if (!vis[neighbor]) {
            dfs(neighbor, adjLs, vis, ans);
        }
    }
}

// Function to perform DFS traversal of the entire graph (handling disconnected components)
vector<int> dfsOfGraph(int n, vector<int> adj[]) {
    vector<bool> visited(n, false);
    vector<int> ans;

    // Starting DFS traversal from each unvisited node (handling disconnected components)
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i, adj, visited, ans);
        }
    }

    return ans;
}

int main() {
    // Example usage to demonstrate DFS traversal of a graph
    int n = 8;  // Number of nodes in the graph
    vector<int> adj[n];  // Adjacency list representation of the graph

    // Constructing the graph (adding edges)

    /*
    
    adj[0] = {2, 3, 4, 5, 7};
    adj[1] = {0, 3, 4, 5, 6, 7};
    adj[2] = {0, 1, 4, 6};
    adj[3] = {0, 1, 2, 5, 6, 7};
    adj[4] = {0, 1, 2, 4, 6, 7};
    adj[5] = {0, 2, 3, 4, 5, 7};
    adj[6] = {0, 1, 2, 4, 5, 6};
    adj[7] = {0, 1, 2, 4, 5, 6};
    
    */
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[0].push_back(4);
    adj[0].push_back(5);
    adj[0].push_back(7);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[1].push_back(5);
    adj[1].push_back(6);
    adj[1].push_back(7);
    adj[2].push_back(0);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[2].push_back(6);
    adj[3].push_back(0);
    adj[3].push_back(1);
    adj[3].push_back(2);
    adj[3].push_back(5);
    adj[3].push_back(6);
    adj[3].push_back(7);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[4].push_back(2);
    adj[4].push_back(3);
    adj[4].push_back(6);
    adj[4].push_back(7);
    adj[5].push_back(0);
    adj[5].push_back(2);
    adj[5].push_back(3);
    adj[5].push_back(4);
    adj[5].push_back(7);
    adj[6].push_back(1);
    adj[6].push_back(2);
    adj[6].push_back(4);
    adj[6].push_back(5);
    adj[6].push_back(7);
    adj[7].push_back(0);
    adj[7].push_back(1);
    adj[7].push_back(2);
    adj[7].push_back(4);
    adj[7].push_back(5);
    adj[7].push_back(6);

    // Perform DFS traversal of the graph
    vector<int> dfsTraversal = dfsOfGraph(n, adj);

    // Output the DFS traversal result
    cout << "DFS Traversal of the graph:" << endl;
    for (int node : dfsTraversal) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
