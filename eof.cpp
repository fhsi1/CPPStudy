#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s;
    while (1)
    {
        getline(cin, s);
        if (cin.eof())
            break;
    }
    return 0;
}