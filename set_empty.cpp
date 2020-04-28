#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string a;

    cin >> a;
    set<char> b(a.begin(), a.end());
    for (auto bb : b)
        cout << bb << " ";
    cout << endl;

    char c;

    while (!b.empty())
    {
        cin >> c;
        if (b.find(c) != b.end())
            b.erase(c);
        for (auto bb : b)
            cout << bb << " ";
        cout << endl;
    }

    return 0;
}