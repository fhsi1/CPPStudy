#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}