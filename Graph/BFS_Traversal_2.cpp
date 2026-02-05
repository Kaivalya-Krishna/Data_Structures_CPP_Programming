#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main ()
{
    int N, E;
    cout << "Enter number of vertices: ";
    cin >> N;
    cout << "Enter number of edges: ";
    cin >> E;
    vector <int> AdjList[N];

    for (int i = 1; i <= E; i++) 
{
        int a, b;
        cout << "Enter the endpoints of the edge " << i << ": ";
        cin >> a >> b;
        AdjList[a].push_back(b);
        AdjList[b].push_back(a);
    }

    cout << "Adjacency List:" << endl;
    for (int i = 0; i < N; i++) 
    {
        cout << i << ": ";
        for (int j=0; j<AdjList[i].size(); j++) 
        {
            cout << AdjList[i][j] << ", ";
        }
        cout << endl;
    }

    // vector <int> status(N, 0);
    // queue <int> Q;
    // status[0] = 1;
    // Q.push(0);
    // cout << "Order of BFS is :";
    // while (Q.size() != 0)
    // {
    //     int x = Q.front();
    //     cout << x << ", ";
    //     Q.pop();
    //     for (int k = 0; k < AdjList[x].size(); k++)
    //     {
    //         int e = AdjList[x][k];
    //         if (status[e] == 0)
    //         {
    //             status[e] = 1;
    //             Q.push(e);
    //         }
    //     }
    // }

    return 0;
}