#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a("\t");
    string b("\n");
    string c = "abcde";

    cout << c << a << endl;
    cout << c << b << endl;

    return 0;
}