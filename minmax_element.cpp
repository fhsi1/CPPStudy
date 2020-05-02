#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(10);

    for (auto &aa : a)
        cin >> aa;

    auto m = minmax_element(a.begin(), a.end());

    cout << "min : " << *m.first << endl;
    cout << "max : " << *m.second << endl;

    return 0;
}