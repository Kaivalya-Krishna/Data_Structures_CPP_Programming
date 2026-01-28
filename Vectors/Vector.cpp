#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    vector <int> num = {1,2,3,4,5};
    // for (int i=0; i<num.size(); i++)
    for (int var : num)
    {
        // cout << num[i] <<"\n";
        // cout << num.at(i) <<"\n";
        cout << var << endl;
    }

    cout << endl;
    // cout << num.front() << "\n";
    // cout << num.back() << endl;

    // num.push_back(6);
    // for (int i=0; i<num.size(); i++)
    // {
    //     // cout << num[i] <<"\n";
    //     cout << num.at(i) <<"\n";
    // }

    // num.pop_back();
    // for (int i=0; i<num.size(); i++)
    // {
    //     // cout << num[i] <<"\n";
    //     cout << num.at(i) <<"\n";
    // }
    // cout << endl;
    // cout << num.empty();

    vector <int> num1;
    num1.assign(num.begin(), num.end());
    for (int var : num1)
    {
        cout << var << endl;
    }

    // num1.assign(3, 7);
    // for (int var : num1)
    // {
    //     cout << var << '\n';
    // }

    // num1.insert(num1.begin()+2, 3, 8);
    // cout << "The new vector is - \n";
    // for (int var : num1)
    // {
    //     cout << var << "\n";
    // }

    num1.erase(num1.begin()+2);
    cout << "The new vector is - \n";
    for (int var : num1)
    {
        cout << var << "\n";
    }
}