#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int l = a.length();
    cout << l << endl;
    cout << a[l - 1] << endl;

    return 0;
}