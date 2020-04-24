#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;

    cin >> a;

    int len = a.length();
    int i = 0;
    while (i < len)
    {
        cout << a[i] << endl;
        i++;
    }
    return 0;
}