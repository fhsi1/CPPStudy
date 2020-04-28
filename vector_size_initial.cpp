#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(10); // no initialize value, initialize 0
    for (auto aa : a)
        cout << aa << " ";
    cout << endl;

    vector<int> b(10, 5);
    for (auto bb : b)
        cout << bb << " ";
    cout << endl;

    return 0;
}