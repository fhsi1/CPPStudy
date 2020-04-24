#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}