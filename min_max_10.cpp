#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int mx, mn;
    int a, i;

    cin >> a;
    mx = mn = a;

    for (i = 1; i < 10; i++) // index
    {
        cin >> a;
        mx = max(mx, a);
        mn = min(mn, a);
    }

    cout << "max : " << mx << endl;
    cout << "min : " << mn << endl;

    return 0;
}