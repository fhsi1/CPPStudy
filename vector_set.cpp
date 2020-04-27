#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector<int> a = {1, 2, 2, 3, 3, 4, 4, 4, 5};
    for (auto aa : a)
        cout << aa << " ";
    cout << endl;

    set<int> b(a.begin(), a.end()); // iterator
    for (auto bb : b)
        cout << bb << " ";
    cout << endl;

    set<int> c = {3, 2, 1, 3, 2, 4, 5, 2, 3, 1};
    for (auto cc : c)
        cout << cc << " ";
    cout << endl;

    return 0;
}