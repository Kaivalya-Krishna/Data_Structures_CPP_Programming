#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int v, e;
    cout << "Enter number of vertices: ";
    cin >> v;
    cout << "Enter number of edges: ";
    cin >> e;

    vector <int> Adj[v];

    for (int i = 0; i < e; i++) 
{
        int src, dest;
        cout << "Enter the endpoints of the edge " << i+1 << " ";
        cin >> src >> dest;
        Adj[src].push_back(dest);
        Adj[dest].push_back(src);
    }

    cout << "Adjacency List:" << endl;
    for (int i = 0; i < v; i++) 
    {
        cout << i << ": ";
        for (int j=0; j<Adj[i].size(); j++) 
        {
            cout << Adj[i][j] << ", ";
        }
        cout << endl;
    }

    return 0;
}