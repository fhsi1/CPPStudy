#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char c = 'A';
    cout << isalpha(c) << endl;
    cout << isdigit(c) << endl;
    cout << isupper(c) << endl;
    cout << islower(c) << endl;
    cout << isalnum(c) << endl;
    cout << isspace(c) << endl;
    cout << isascii(c) << endl;

    return 0;
}