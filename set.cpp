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

    return 0;
}