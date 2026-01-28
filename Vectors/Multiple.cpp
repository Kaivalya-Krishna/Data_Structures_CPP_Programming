#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector <int> v[4];

    v[0].push_back(1);
    v[0].push_back(2);
    v[0].push_back(3);
    v[0].push_back(4);

    v[1].push_back(2);
    v[1].push_back(4);
    v[1].push_back(6);
    v[1].push_back(8);

    v[2].push_back(3);
    v[2].push_back(6);
    v[2].push_back(9);
    v[2].push_back(12);

    v[3].push_back(4);
    v[3].push_back(8);
    v[3].push_back(12);
    v[3].push_back(16);

    for(int i=0;i<4;i++)
	{
	    cout << i << ": ";
        for (int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << ", ";
        }
        cout << endl;
	}

    v[1].pop_back();
    v[3].pop_back();
    v[4].pop_back();

    cout << endl;
    cout << endl;
    
    for(int i=0;i<4;i++)
	{
	    cout << i << ": ";
        for (int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << ", ";
        }
        cout << endl;
	}

    return 0;
}